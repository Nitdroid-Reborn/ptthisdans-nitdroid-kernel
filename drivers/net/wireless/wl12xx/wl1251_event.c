/*
 * This file is part of wl1251
 *
 * Copyright (c) 1998-2007 Texas Instruments Incorporated
 * Copyright (C) 2008 Nokia Corporation
 *
 * Contact: Kalle Valo <kalle.valo@nokia.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 *
 */

#include "wl1251.h"
#include "wl1251_reg.h"
#include "wl1251_spi.h"
#include "wl1251_event.h"
#include "wl1251_ps.h"

static int wl1251_event_scan_complete(struct wl1251 *wl,
				      struct event_mailbox *mbox)
{
	if (wl->scanning) {
		mutex_unlock(&wl->mutex);
		ieee80211_scan_completed(wl->hw);
		mutex_lock(&wl->mutex);
		wl1251_debug(DEBUG_MAC80211, "mac80211 hw scan completed");
		wl->scanning = false;
	}

	return 0;
}

#define WL1251_PS_ENTRY_RETRIES  3
static int wl1251_event_ps_report(struct wl1251 *wl,
				  struct event_mailbox *mbox)
{
	int ret = 0;

	wl1251_debug(DEBUG_EVENT, "ps status: %x", mbox->ps_status);

	switch (mbox->ps_status) {
	case ENTER_POWER_SAVE_FAIL:
		if (!wl->psm) {
			wl->ps_entry_retry = 0;
			break;
		}

		if (wl->ps_entry_retry < WL1251_PS_ENTRY_RETRIES) {
			ret = wl1251_ps_set_mode(wl, STATION_POWER_SAVE_MODE);
			wl->ps_entry_retry++;
		} else {
			wl1251_error("Power save entry failed, giving up");
			wl->ps_entry_retry = 0;
		}
		break;
	case ENTER_POWER_SAVE_SUCCESS:
	default:
		wl->ps_entry_retry = 0;
		break;
	}

	return 0;
}

static int wl1251_event_process(struct wl1251 *wl, struct event_mailbox *mbox)
{
	int ret;
	u32 vector;

	vector = mbox->events_vector & ~(mbox->events_mask);

	if (vector & SCAN_COMPLETE_EVENT_ID) {
		ret = wl1251_event_scan_complete(wl, mbox);
		if (ret < 0)
			return ret;
	}

	if (vector & BSS_LOSE_EVENT_ID) {
		wl1251_debug(DEBUG_EVENT, "BSS_LOSE_EVENT");

		if (wl->psm_requested && wl->psm) {
			ret = wl1251_ps_set_mode(wl, STATION_ACTIVE_MODE);
			if (ret < 0)
				return ret;
		}
	}

	if (vector & PS_REPORT_EVENT_ID) {
		wl1251_debug(DEBUG_EVENT, "PS_REPORT_EVENT_ID");
		ret = wl1251_event_ps_report(wl, mbox);
		if (ret < 0)
			return ret;
	}

	if (wl->vif && (vector & SYNCHRONIZATION_TIMEOUT_EVENT_ID)) {
		wl1251_debug(DEBUG_EVENT, "SYNCHRONIZATION_TIMEOUT_EVENT");
		/* need to unlock mutex to avoid deadlocking with rtnl */
		mutex_unlock(&wl->mutex);

		/* indicate to the stack, that beacons have been lost */
		ieee80211_beacon_loss(wl->vif);
		mutex_lock(&wl->mutex);
	}

	if (vector & REGAINED_BSS_EVENT_ID) {
		if (wl->psm_requested) {
			ret = wl1251_ps_set_mode(wl, STATION_POWER_SAVE_MODE);
			if (ret < 0)
				return ret;
		}
	}

	if (wl->vif && (vector & ROAMING_TRIGGER_LOW_RSSI_EVENT_ID)) {
		wl1251_debug(DEBUG_EVENT, "ROAMING_TRIGGER_LOW_RSSI_EVENT");
		ieee80211_rssi_changed(wl->vif, IEEE80211_RSSI_STATE_LOW);
	}

	if (wl->vif && (vector & ROAMING_TRIGGER_REGAINED_RSSI_EVENT_ID)) {
		wl1251_debug(DEBUG_EVENT,
			     "ROAMING_TRIGGER_REGAINED_RSSI_EVENT");
		ieee80211_rssi_changed(wl->vif, IEEE80211_RSSI_STATE_HIGH);
	}

	return 0;
}

int wl1251_event_unmask(struct wl1251 *wl)
{
	int ret;

	ret = wl1251_acx_event_mbox_mask(wl, ~(wl->event_mask));
	if (ret < 0)
		return ret;

	return 0;
}

void wl1251_event_mbox_config(struct wl1251 *wl)
{
	wl->mbox_ptr[0] = wl1251_reg_read32(wl, REG_EVENT_MAILBOX_PTR);
	wl->mbox_ptr[1] = wl->mbox_ptr[0] + sizeof(struct event_mailbox);
}

int wl1251_event_handle(struct wl1251 *wl, u8 mbox_num)
{
	struct event_mailbox mbox;
	int ret;

	if (mbox_num > 1)
		return -EINVAL;

	/* first we read the mbox descriptor */
	wl1251_spi_mem_read(wl, wl->mbox_ptr[mbox_num], &mbox,
			    sizeof(struct event_mailbox));

	/* process the descriptor */
	ret = wl1251_event_process(wl, &mbox);
	if (ret < 0)
		return ret;

	/* then we let the firmware know it can go on...*/
	wl1251_reg_write32(wl, ACX_REG_INTERRUPT_TRIG, INTR_TRIG_EVENT_ACK);

	return 0;
}
