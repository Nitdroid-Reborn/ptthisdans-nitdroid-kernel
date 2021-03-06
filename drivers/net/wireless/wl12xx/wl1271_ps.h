#ifndef __WL1271_PS_H__
#define __WL1271_PS_H__

/*
 * This file is part of wl1271
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

#include "wl1271.h"
#include "wl1271_acx.h"

int wl1271_ps_set_mode(struct wl1271 *wl, enum wl1271_cmd_ps_mode mode);
void wl1271_ps_elp_sleep(struct wl1271 *wl);
int wl1271_ps_elp_wakeup(struct wl1271 *wl, bool chip_awake);


#endif /* __WL1271_PS_H__ */
