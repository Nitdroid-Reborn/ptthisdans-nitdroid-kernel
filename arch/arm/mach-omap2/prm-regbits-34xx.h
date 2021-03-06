#ifndef __ARCH_ARM_MACH_OMAP2_PRM_REGBITS_34XX_H
#define __ARCH_ARM_MACH_OMAP2_PRM_REGBITS_34XX_H

/*
 * OMAP3430 Power/Reset Management register bits
 *
 * Copyright (C) 2007-2008 Texas Instruments, Inc.
 * Copyright (C) 2007-2008 Nokia Corporation
 *
 * Written by Paul Walmsley
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#include "prm.h"

/* Shared register bits */

/* PRM_VC_CMD_VAL_0, PRM_VC_CMD_VAL_1 shared bits */
#define OMAP3430_ON_SHIFT				24
#define OMAP3430_ON_MASK				(0xff << 24)
#define OMAP3430_ONLP_SHIFT				16
#define OMAP3430_ONLP_MASK				(0xff << 16)
#define OMAP3430_RET_SHIFT				8
#define OMAP3430_RET_MASK				(0xff << 8)
#define OMAP3430_OFF_SHIFT				0
#define OMAP3430_OFF_MASK				(0xff << 0)

/* PRM_VP1_CONFIG, PRM_VP2_CONFIG shared bits */
#define OMAP3430_ERROROFFSET_SHIFT			24
#define OMAP3430_ERROROFFSET_MASK			(0xff << 24)
#define OMAP3430_ERRORGAIN_SHIFT			16
#define OMAP3430_ERRORGAIN_MASK				(0xff << 16)
#define OMAP3430_INITVOLTAGE_SHIFT			8
#define OMAP3430_INITVOLTAGE_MASK			(0xff << 8)
#define OMAP3430_TIMEOUTEN				(1 << 3)
#define OMAP3430_INITVDD				(1 << 2)
#define OMAP3430_FORCEUPDATE				(1 << 1)
#define OMAP3430_VPENABLE				(1 << 0)

/* PRM_VP1_VSTEPMIN, PRM_VP2_VSTEPMIN shared bits */
#define OMAP3430_SMPSWAITTIMEMIN_SHIFT			8
#define OMAP3430_SMPSWAITTIMEMIN_MASK			(0xffff << 8)
#define OMAP3430_VSTEPMIN_SHIFT				0
#define OMAP3430_VSTEPMIN_MASK				(0xff << 0)

/* PRM_VP1_VSTEPMAX, PRM_VP2_VSTEPMAX shared bits */
#define OMAP3430_SMPSWAITTIMEMAX_SHIFT			8
#define OMAP3430_SMPSWAITTIMEMAX_MASK			(0xffff << 8)
#define OMAP3430_VSTEPMAX_SHIFT				0
#define OMAP3430_VSTEPMAX_MASK				(0xff << 0)

/* PRM_VP1_VLIMITTO, PRM_VP2_VLIMITTO shared bits */
#define OMAP3430_VDDMAX_SHIFT				24
#define OMAP3430_VDDMAX_MASK				(0xff << 24)
#define OMAP3430_VDDMIN_SHIFT				16
#define OMAP3430_VDDMIN_MASK				(0xff << 16)
#define OMAP3430_TIMEOUT_SHIFT				0
#define OMAP3430_TIMEOUT_MASK				(0xffff << 0)

/* PRM_VP1_VOLTAGE, PRM_VP2_VOLTAGE shared bits */
#define OMAP3430_VPVOLTAGE_SHIFT			0
#define OMAP3430_VPVOLTAGE_MASK				(0xff << 0)

/* PRM_VP1_STATUS, PRM_VP2_STATUS shared bits */
#define OMAP3430_VPINIDLE				(1 << 0)

/* PM_WKDEP_IVA2, PM_WKDEP_MPU shared bits */
#define OMAP3430_EN_PER_SHIFT				7
#define OMAP3430_EN_PER_MASK				(1 << 7)

/* PM_PWSTCTRL_IVA2, PM_PWSTCTRL_MPU, PM_PWSTCTRL_CORE shared bits */
#define OMAP3430_MEMORYCHANGE				(1 << 3)

/* PM_PWSTST_IVA2, PM_PWSTST_CORE shared bits */
#define OMAP3430_LOGICSTATEST				(1 << 2)

/* PM_PREPWSTST_IVA2, PM_PREPWSTST_CORE shared bits */
#define OMAP3430_LASTLOGICSTATEENTERED			(1 << 2)

/*
 * PM_PREPWSTST_IVA2, PM_PREPWSTST_MPU, PM_PREPWSTST_CORE,
 * PM_PREPWSTST_GFX, PM_PREPWSTST_DSS, PM_PREPWSTST_CAM,
 * PM_PREPWSTST_PER, PM_PREPWSTST_NEON shared bits
 */
#define OMAP3430_LASTPOWERSTATEENTERED_SHIFT			0
#define OMAP3430_LASTPOWERSTATEENTERED_MASK			(0x3 << 0)

/* PRM_IRQSTATUS_IVA2, PRM_IRQSTATUS_MPU shared bits */
#define OMAP3430_WKUP_ST				(1 << 0)

/* PRM_IRQENABLE_IVA2, PRM_IRQENABLE_MPU shared bits */
#define OMAP3430_WKUP_EN					(1 << 0)

/* PM_MPUGRPSEL1_CORE, PM_IVA2GRPSEL1_CORE shared bits */
#define OMAP3430_GRPSEL_MMC2				(1 << 25)
#define OMAP3430_GRPSEL_MMC1				(1 << 24)
#define OMAP3430_GRPSEL_MCSPI4				(1 << 21)
#define OMAP3430_GRPSEL_MCSPI3				(1 << 20)
#define OMAP3430_GRPSEL_MCSPI2				(1 << 19)
#define OMAP3430_GRPSEL_MCSPI1				(1 << 18)
#define OMAP3430_GRPSEL_I2C3				(1 << 17)
#define OMAP3430_GRPSEL_I2C2				(1 << 16)
#define OMAP3430_GRPSEL_I2C1				(1 << 15)
#define OMAP3430_GRPSEL_UART2				(1 << 14)
#define OMAP3430_GRPSEL_UART1				(1 << 13)
#define OMAP3430_GRPSEL_GPT11				(1 << 12)
#define OMAP3430_GRPSEL_GPT10				(1 << 11)
#define OMAP3430_GRPSEL_MCBSP5				(1 << 10)
#define OMAP3430_GRPSEL_MCBSP1				(1 << 9)
#define OMAP3430_GRPSEL_HSOTGUSB			(1 << 4)
#define OMAP3430_GRPSEL_D2D				(1 << 3)

/*
 * PM_PWSTCTRL_GFX, PM_PWSTCTRL_DSS, PM_PWSTCTRL_CAM,
 * PM_PWSTCTRL_PER shared bits
 */
#define OMAP3430_MEMONSTATE_SHIFT			16
#define OMAP3430_MEMONSTATE_MASK			(0x3 << 16)
#define OMAP3430_MEMRETSTATE				(1 << 8)

/* PM_MPUGRPSEL_PER, PM_IVA2GRPSEL_PER shared bits */
#define OMAP3430_GRPSEL_GPIO6				(1 << 17)
#define OMAP3430_GRPSEL_GPIO5				(1 << 16)
#define OMAP3430_GRPSEL_GPIO4				(1 << 15)
#define OMAP3430_GRPSEL_GPIO3				(1 << 14)
#define OMAP3430_GRPSEL_GPIO2				(1 << 13)
#define OMAP3430_GRPSEL_UART3				(1 << 11)
#define OMAP3430_GRPSEL_GPT9				(1 << 10)
#define OMAP3430_GRPSEL_GPT8				(1 << 9)
#define OMAP3430_GRPSEL_GPT7				(1 << 8)
#define OMAP3430_GRPSEL_GPT6				(1 << 7)
#define OMAP3430_GRPSEL_GPT5				(1 << 6)
#define OMAP3430_GRPSEL_GPT4				(1 << 5)
#define OMAP3430_GRPSEL_GPT3				(1 << 4)
#define OMAP3430_GRPSEL_GPT2				(1 << 3)
#define OMAP3430_GRPSEL_MCBSP4				(1 << 2)
#define OMAP3430_GRPSEL_MCBSP3				(1 << 1)
#define OMAP3430_GRPSEL_MCBSP2				(1 << 0)

/* PM_MPUGRPSEL_WKUP, PM_IVA2GRPSEL_WKUP shared bits */
#define OMAP3430_GRPSEL_IO				(1 << 8)
#define OMAP3430_GRPSEL_SR2				(1 << 7)
#define OMAP3430_GRPSEL_SR1				(1 << 6)
#define OMAP3430_GRPSEL_GPIO1				(1 << 3)
#define OMAP3430_GRPSEL_GPT12				(1 << 1)
#define OMAP3430_GRPSEL_GPT1				(1 << 0)

/* Bits specific to each register */

/* RM_RSTCTRL_IVA2 */
#define OMAP3430_RST3_IVA2				(1 << 2)
#define OMAP3430_RST2_IVA2				(1 << 1)
#define OMAP3430_RST1_IVA2				(1 << 0)

/* RM_RSTST_IVA2 specific bits */
#define OMAP3430_EMULATION_VSEQ_RST			(1 << 13)
#define OMAP3430_EMULATION_VHWA_RST			(1 << 12)
#define OMAP3430_EMULATION_IVA2_RST			(1 << 11)
#define OMAP3430_IVA2_SW_RST3				(1 << 10)
#define OMAP3430_IVA2_SW_RST2				(1 << 9)
#define OMAP3430_IVA2_SW_RST1				(1 << 8)

/* PM_WKDEP_IVA2 specific bits */

/* PM_PWSTCTRL_IVA2 specific bits */
#define OMAP3430_L2FLATMEMONSTATE_SHIFT			22
#define OMAP3430_L2FLATMEMONSTATE_MASK			(0x3 << 22)
#define OMAP3430_SHAREDL2CACHEFLATONSTATE_SHIFT		20
#define OMAP3430_SHAREDL2CACHEFLATONSTATE_MASK		(0x3 << 20)
#define OMAP3430_L1FLATMEMONSTATE_SHIFT			18
#define OMAP3430_L1FLATMEMONSTATE_MASK			(0x3 << 18)
#define OMAP3430_SHAREDL1CACHEFLATONSTATE_SHIFT		16
#define OMAP3430_SHAREDL1CACHEFLATONSTATE_MASK		(0x3 << 16)
#define OMAP3430_L2FLATMEMRETSTATE			(1 << 11)
#define OMAP3430_SHAREDL2CACHEFLATRETSTATE		(1 << 10)
#define OMAP3430_L1FLATMEMRETSTATE			(1 << 9)
#define OMAP3430_SHAREDL1CACHEFLATRETSTATE		(1 << 8)

/* PM_PWSTST_IVA2 specific bits */
#define OMAP3430_L2FLATMEMSTATEST_SHIFT			10
#define OMAP3430_L2FLATMEMSTATEST_MASK			(0x3 << 10)
#define OMAP3430_SHAREDL2CACHEFLATSTATEST_SHIFT		8
#define OMAP3430_SHAREDL2CACHEFLATSTATEST_MASK		(0x3 << 8)
#define OMAP3430_L1FLATMEMSTATEST_SHIFT			6
#define OMAP3430_L1FLATMEMSTATEST_MASK			(0x3 << 6)
#define OMAP3430_SHAREDL1CACHEFLATSTATEST_SHIFT		4
#define OMAP3430_SHAREDL1CACHEFLATSTATEST_MASK		(0x3 << 4)

/* PM_PREPWSTST_IVA2 specific bits */
#define OMAP3430_LASTL2FLATMEMSTATEENTERED_SHIFT		10
#define OMAP3430_LASTL2FLATMEMSTATEENTERED_MASK			(0x3 << 10)
#define OMAP3430_LASTSHAREDL2CACHEFLATSTATEENTERED_SHIFT	8
#define OMAP3430_LASTSHAREDL2CACHEFLATSTATEENTERED_MASK		(0x3 << 8)
#define OMAP3430_LASTL1FLATMEMSTATEENTERED_SHIFT		6
#define OMAP3430_LASTL1FLATMEMSTATEENTERED_MASK			(0x3 << 6)
#define OMAP3430_LASTSHAREDL1CACHEFLATSTATEENTERED_SHIFT	4
#define OMAP3430_LASTSHAREDL1CACHEFLATSTATEENTERED_MASK		(0x3 << 4)

/* PRM_IRQSTATUS_IVA2 specific bits */
#define OMAP3430_PRM_IRQSTATUS_IVA2_IVA2_DPLL_ST	(1 << 2)
#define OMAP3430_FORCEWKUP_ST				(1 << 1)

/* PRM_IRQENABLE_IVA2 specific bits */
#define OMAP3430_PRM_IRQENABLE_IVA2_IVA2_DPLL_RECAL_EN		(1 << 2)
#define OMAP3430_FORCEWKUP_EN					(1 << 1)

/* PRM_REVISION specific bits */

/* PRM_SYSCONFIG specific bits */

/* PRM_IRQSTATUS_MPU specific bits */
#define OMAP3430ES2_SND_PERIPH_DPLL_ST_SHIFT		25
#define OMAP3430ES2_SND_PERIPH_DPLL_ST			(1 << 25)
#define OMAP3430_VC_TIMEOUTERR_ST			(1 << 24)
#define OMAP3430_VC_RAERR_ST				(1 << 23)
#define OMAP3430_VC_SAERR_ST				(1 << 22)
#define OMAP3430_VP2_TRANXDONE_ST			(1 << 21)
#define OMAP3430_VP2_EQVALUE_ST				(1 << 20)
#define OMAP3430_VP2_NOSMPSACK_ST			(1 << 19)
#define OMAP3430_VP2_MAXVDD_ST				(1 << 18)
#define OMAP3430_VP2_MINVDD_ST				(1 << 17)
#define OMAP3430_VP2_OPPCHANGEDONE_ST			(1 << 16)
#define OMAP3430_VP1_TRANXDONE_ST			(1 << 15)
#define OMAP3430_VP1_EQVALUE_ST				(1 << 14)
#define OMAP3430_VP1_NOSMPSACK_ST			(1 << 13)
#define OMAP3430_VP1_MAXVDD_ST				(1 << 12)
#define OMAP3430_VP1_MINVDD_ST				(1 << 11)
#define OMAP3430_VP1_OPPCHANGEDONE_ST			(1 << 10)
#define OMAP3430_IO_ST					(1 << 9)
#define OMAP3430_PRM_IRQSTATUS_MPU_IVA2_DPLL_ST		(1 << 8)
#define OMAP3430_PRM_IRQSTATUS_MPU_IVA2_DPLL_ST_SHIFT	8
#define OMAP3430_MPU_DPLL_ST				(1 << 7)
#define OMAP3430_MPU_DPLL_ST_SHIFT			7
#define OMAP3430_PERIPH_DPLL_ST				(1 << 6)
#define OMAP3430_PERIPH_DPLL_ST_SHIFT			6
#define OMAP3430_CORE_DPLL_ST				(1 << 5)
#define OMAP3430_CORE_DPLL_ST_SHIFT			5
#define OMAP3430_TRANSITION_ST				(1 << 4)
#define OMAP3430_EVGENOFF_ST				(1 << 3)
#define OMAP3430_EVGENON_ST				(1 << 2)
#define OMAP3430_FS_USB_WKUP_ST				(1 << 1)

/* PRM_IRQENABLE_MPU specific bits */
#define OMAP3430ES2_SND_PERIPH_DPLL_RECAL_EN_SHIFT		25
#define OMAP3430ES2_SND_PERIPH_DPLL_RECAL_EN			(1 << 25)
#define OMAP3430_VC_TIMEOUTERR_EN				(1 << 24)
#define OMAP3430_VC_RAERR_EN					(1 << 23)
#define OMAP3430_VC_SAERR_EN					(1 << 22)
#define OMAP3430_VP2_TRANXDONE_EN				(1 << 21)
#define OMAP3430_VP2_EQVALUE_EN					(1 << 20)
#define OMAP3430_VP2_NOSMPSACK_EN				(1 << 19)
#define OMAP3430_VP2_MAXVDD_EN					(1 << 18)
#define OMAP3430_VP2_MINVDD_EN					(1 << 17)
#define OMAP3430_VP2_OPPCHANGEDONE_EN				(1 << 16)
#define OMAP3430_VP1_TRANXDONE_EN				(1 << 15)
#define OMAP3430_VP1_EQVALUE_EN					(1 << 14)
#define OMAP3430_VP1_NOSMPSACK_EN				(1 << 13)
#define OMAP3430_VP1_MAXVDD_EN					(1 << 12)
#define OMAP3430_VP1_MINVDD_EN					(1 << 11)
#define OMAP3430_VP1_OPPCHANGEDONE_EN				(1 << 10)
#define OMAP3430_IO_EN						(1 << 9)
#define OMAP3430_PRM_IRQENABLE_MPU_IVA2_DPLL_RECAL_EN		(1 << 8)
#define OMAP3430_PRM_IRQENABLE_MPU_IVA2_DPLL_RECAL_EN_SHIFT	8
#define OMAP3430_MPU_DPLL_RECAL_EN				(1 << 7)
#define OMAP3430_MPU_DPLL_RECAL_EN_SHIFT			7
#define OMAP3430_PERIPH_DPLL_RECAL_EN				(1 << 6)
#define OMAP3430_PERIPH_DPLL_RECAL_EN_SHIFT			6
#define OMAP3430_CORE_DPLL_RECAL_EN				(1 << 5)
#define OMAP3430_CORE_DPLL_RECAL_EN_SHIFT			5
#define OMAP3430_TRANSITION_EN					(1 << 4)
#define OMAP3430_EVGENOFF_EN					(1 << 3)
#define OMAP3430_EVGENON_EN					(1 << 2)
#define OMAP3430_FS_USB_WKUP_EN					(1 << 1)

/* RM_RSTST_MPU specific bits */
#define OMAP3430_EMULATION_MPU_RST			(1 << 11)

/* PM_WKDEP_MPU specific bits */
#define OMAP3430_PM_WKDEP_MPU_EN_DSS_SHIFT		5
#define OMAP3430_PM_WKDEP_MPU_EN_DSS_MASK		(1 << 5)
#define OMAP3430_PM_WKDEP_MPU_EN_IVA2_SHIFT		2
#define OMAP3430_PM_WKDEP_MPU_EN_IVA2_MASK		(1 << 2)

/* PM_EVGENCTRL_MPU */
#define OMAP3430_OFFLOADMODE_SHIFT			3
#define OMAP3430_OFFLOADMODE_MASK			(0x3 << 3)
#define OMAP3430_ONLOADMODE_SHIFT			1
#define OMAP3430_ONLOADMODE_MASK			(0x3 << 1)
#define OMAP3430_ENABLE					(1 << 0)

/* PM_EVGENONTIM_MPU */
#define OMAP3430_ONTIMEVAL_SHIFT			0
#define OMAP3430_ONTIMEVAL_MASK				(0xffffffff << 0)

/* PM_EVGENOFFTIM_MPU */
#define OMAP3430_OFFTIMEVAL_SHIFT			0
#define OMAP3430_OFFTIMEVAL_MASK			(0xffffffff << 0)

/* PM_PWSTCTRL_MPU specific bits */
#define OMAP3430_L2CACHEONSTATE_SHIFT			16
#define OMAP3430_L2CACHEONSTATE_MASK			(0x3 << 16)
#define OMAP3430_L2CACHERETSTATE			(1 << 8)
#define OMAP3430_LOGICL1CACHERETSTATE			(1 << 2)

/* PM_PWSTST_MPU specific bits */
#define OMAP3430_L2CACHESTATEST_SHIFT			6
#define OMAP3430_L2CACHESTATEST_MASK			(0x3 << 6)
#define OMAP3430_LOGICL1CACHESTATEST			(1 << 2)

/* PM_PREPWSTST_MPU specific bits */
#define OMAP3430_LASTL2CACHESTATEENTERED_SHIFT		6
#define OMAP3430_LASTL2CACHESTATEENTERED_MASK		(0x3 << 6)
#define OMAP3430_LASTLOGICL1CACHESTATEENTERED		(1 << 2)

/* RM_RSTCTRL_CORE */
#define OMAP3430_RM_RSTCTRL_CORE_MODEM_SW_RSTPWRON		(1 << 1)
#define OMAP3430_RM_RSTCTRL_CORE_MODEM_SW_RST			(1 << 0)

/* RM_RSTST_CORE specific bits */
#define OMAP3430_MODEM_SECURITY_VIOL_RST		(1 << 10)
#define OMAP3430_RM_RSTST_CORE_MODEM_SW_RSTPWRON	(1 << 9)
#define OMAP3430_RM_RSTST_CORE_MODEM_SW_RST		(1 << 8)

/* PM_WKEN1_CORE specific bits */

/* PM_MPUGRPSEL1_CORE specific bits */
#define OMAP3430_GRPSEL_FSHOSTUSB			(1 << 5)

/* PM_IVA2GRPSEL1_CORE specific bits */

/* PM_WKST1_CORE specific bits */

/* PM_PWSTCTRL_CORE specific bits */
#define OMAP3430_MEM2ONSTATE_SHIFT			18
#define OMAP3430_MEM2ONSTATE_MASK			(0x3 << 18)
#define OMAP3430_MEM1ONSTATE_SHIFT			16
#define OMAP3430_MEM1ONSTATE_MASK			(0x3 << 16)
#define OMAP3430_MEM2RETSTATE				(1 << 9)
#define OMAP3430_MEM1RETSTATE				(1 << 8)

/* PM_PWSTST_CORE specific bits */
#define OMAP3430_MEM2STATEST_SHIFT			6
#define OMAP3430_MEM2STATEST_MASK			(0x3 << 6)
#define OMAP3430_MEM1STATEST_SHIFT			4
#define OMAP3430_MEM1STATEST_MASK			(0x3 << 4)

/* PM_PREPWSTST_CORE specific bits */
#define OMAP3430_LASTMEM2STATEENTERED_SHIFT		6
#define OMAP3430_LASTMEM2STATEENTERED_MASK		(0x3 << 6)
#define OMAP3430_LASTMEM1STATEENTERED_SHIFT		4
#define OMAP3430_LASTMEM1STATEENTERED_MASK		(0x3 << 4)

/* RM_RSTST_GFX specific bits */

/* PM_WKDEP_GFX specific bits */
#define OMAP3430_PM_WKDEP_GFX_EN_IVA2			(1 << 2)

/* PM_PWSTCTRL_GFX specific bits */

/* PM_PWSTST_GFX specific bits */

/* PM_PREPWSTST_GFX specific bits */

/* PM_WKEN_WKUP specific bits */
#define OMAP3430_EN_IO_CHAIN				(1 << 16)
#define OMAP3430_EN_IO					(1 << 8)
#define OMAP3430_EN_GPIO1				(1 << 3)

/* PM_MPUGRPSEL_WKUP specific bits */

/* PM_IVA2GRPSEL_WKUP specific bits */

/* PM_WKST_WKUP specific bits */
#define OMAP3430_ST_IO_CHAIN				(1 << 16)
#define OMAP3430_ST_IO					(1 << 8)

/* PRM_CLKSEL */
#define OMAP3430_SYS_CLKIN_SEL_SHIFT			0
#define OMAP3430_SYS_CLKIN_SEL_MASK			(0x7 << 0)

/* PRM_CLKOUT_CTRL */
#define OMAP3430_CLKOUT_EN				(1 << 7)
#define OMAP3430_CLKOUT_EN_SHIFT			7

/* RM_RSTST_DSS specific bits */

/* PM_WKEN_DSS */
#define OMAP3430_PM_WKEN_DSS_EN_DSS			(1 << 0)

/* PM_WKDEP_DSS specific bits */
#define OMAP3430_PM_WKDEP_DSS_EN_IVA2			(1 << 2)

/* PM_PWSTCTRL_DSS specific bits */

/* PM_PWSTST_DSS specific bits */

/* PM_PREPWSTST_DSS specific bits */

/* RM_RSTST_CAM specific bits */

/* PM_WKDEP_CAM specific bits */
#define OMAP3430_PM_WKDEP_CAM_EN_IVA2			(1 << 2)

/* PM_PWSTCTRL_CAM specific bits */

/* PM_PWSTST_CAM specific bits */

/* PM_PREPWSTST_CAM specific bits */

/* PM_PWSTCTRL_USBHOST specific bits */
#define OMAP3430ES2_SAVEANDRESTORE_SHIFT		4

/* RM_RSTST_PER specific bits */

/* PM_WKEN_PER specific bits */

/* PM_MPUGRPSEL_PER specific bits */

/* PM_IVA2GRPSEL_PER specific bits */

/* PM_WKST_PER specific bits */

/* PM_WKDEP_PER specific bits */
#define OMAP3430_PM_WKDEP_PER_EN_IVA2			(1 << 2)

/* PM_PWSTCTRL_PER specific bits */

/* PM_PWSTST_PER specific bits */

/* PM_PREPWSTST_PER specific bits */

/* RM_RSTST_EMU specific bits */

/* PM_PWSTST_EMU specific bits */

/* PRM_VC_SMPS_SA */
#define OMAP3430_SMPS_SA1_SHIFT				16
#define OMAP3430_SMPS_SA1_MASK				(0x7f << 16)
#define OMAP3430_SMPS_SA0_SHIFT				0
#define OMAP3430_SMPS_SA0_MASK				(0x7f << 0)

/* PRM_VC_SMPS_VOL_RA */
#define OMAP3430_VOLRA1_SHIFT				16
#define OMAP3430_VOLRA1_MASK				(0xff << 16)
#define OMAP3430_VOLRA0_SHIFT				0
#define OMAP3430_VOLRA0_MASK				(0xff << 0)

/* PRM_VC_SMPS_CMD_RA */
#define OMAP3430_CMDRA1_SHIFT				16
#define OMAP3430_CMDRA1_MASK				(0xff << 16)
#define OMAP3430_CMDRA0_SHIFT				0
#define OMAP3430_CMDRA0_MASK				(0xff << 0)

/* PRM_VC_CMD_VAL */
#define OMAP3430_VC_CMD_ON_SHIFT			24
#define OMAP3430_VC_CMD_ON_MASK				(0xFF << 24)
#define OMAP3430_VC_CMD_ONLP_SHIFT			16
#define OMAP3430_VC_CMD_ONLP_MASK			(0xFF << 16)
#define OMAP3430_VC_CMD_RET_SHIFT			8
#define OMAP3430_VC_CMD_RET_MASK			(0xFF << 8)
#define OMAP3430_VC_CMD_OFF_SHIFT			0
#define OMAP3430_VC_CMD_OFF_MASK			(0xFF << 0)

/* PRM_VC_CH_CONF */
#define OMAP3430_CMD1					(1 << 20)
#define OMAP3430_RACEN1					(1 << 19)
#define OMAP3430_RAC1					(1 << 18)
#define OMAP3430_RAV1					(1 << 17)
#define OMAP3430_PRM_VC_CH_CONF_SA1			(1 << 16)
#define OMAP3430_CMD0					(1 << 4)
#define OMAP3430_RACEN0					(1 << 3)
#define OMAP3430_RAC0					(1 << 2)
#define OMAP3430_RAV0					(1 << 1)
#define OMAP3430_PRM_VC_CH_CONF_SA0			(1 << 0)

/* PRM_VC_I2C_CFG */
#define OMAP3430_HSMASTER				(1 << 5)
#define OMAP3430_SREN					(1 << 4)
#define OMAP3430_HSEN					(1 << 3)
#define OMAP3430_MCODE_SHIFT				0
#define OMAP3430_MCODE_MASK				(0x7 << 0)

/* PRM_VC_BYPASS_VAL */
#define OMAP3430_VALID					(1 << 24)
#define OMAP3430_DATA_SHIFT				16
#define OMAP3430_DATA_MASK				(0xff << 16)
#define OMAP3430_REGADDR_SHIFT				8
#define OMAP3430_REGADDR_MASK				(0xff << 8)
#define OMAP3430_SLAVEADDR_SHIFT			0
#define OMAP3430_SLAVEADDR_MASK				(0x7f << 0)

/* PRM_RSTCTRL */
#define OMAP3430_RST_DPLL3				(1 << 2)
#define OMAP3430_RST_GS					(1 << 1)

/* PRM_RSTTIME */
#define OMAP3430_RSTTIME2_SHIFT				8
#define OMAP3430_RSTTIME2_MASK				(0x1f << 8)
#define OMAP3430_RSTTIME1_SHIFT				0
#define OMAP3430_RSTTIME1_MASK				(0xff << 0)

/* PRM_RSTST */
#define OMAP3430_ICECRUSHER_RST				(1 << 10)
#define OMAP3430_ICEPICK_RST				(1 << 9)
#define OMAP3430_VDD2_VOLTAGE_MANAGER_RST		(1 << 8)
#define OMAP3430_VDD1_VOLTAGE_MANAGER_RST		(1 << 7)
#define OMAP3430_EXTERNAL_WARM_RST			(1 << 6)
#define OMAP3430_SECURE_WD_RST				(1 << 5)
#define OMAP3430_MPU_WD_RST				(1 << 4)
#define OMAP3430_SECURITY_VIOL_RST			(1 << 3)
#define OMAP3430_GLOBAL_SW_RST				(1 << 1)
#define OMAP3430_GLOBAL_COLD_RST			(1 << 0)

/* PRM_VOLTCTRL */
#define OMAP3430_SEL_VMODE				(1 << 4)
#define OMAP3430_SEL_OFF				(1 << 3)
#define OMAP3430_AUTO_OFF				(1 << 2)
#define OMAP3430_AUTO_RET				(1 << 1)
#define OMAP3430_AUTO_SLEEP				(1 << 0)

/* Constants to define setup durations */
#define OMAP3430_CLKSETUP_DURATION			0xff
#define OMAP3430_VOLTSETUP_TIME2			0xfff
#define OMAP3430_VOLTSETUP_TIME1			0xfff
#define OMAP3430_VOLTOFFSET_DURATION			0xff
#define OMAP3430_VOLTSETUP2_DURATION			0xff

/* PRM_SRAM_PCHARGE */
#define OMAP3430_PCHARGE_TIME_SHIFT			0
#define OMAP3430_PCHARGE_TIME_MASK			(0xff << 0)

/* PRM_CLKSRC_CTRL */
#define OMAP3430_SYSCLKDIV_SHIFT			6
#define OMAP3430_SYSCLKDIV_MASK				(0x3 << 6)
#define OMAP3430_AUTOEXTCLKMODE_SHIFT			3
#define OMAP3430_AUTOEXTCLKMODE_MASK			(0x3 << 3)
#define OMAP3430_SYSCLKSEL_SHIFT			0
#define OMAP3430_SYSCLKSEL_MASK				(0x3 << 0)

/* PRM_VOLTSETUP1 */
#define OMAP3430_SETUP_TIME2_SHIFT			16
#define OMAP3430_SETUP_TIME2_MASK			(0xffff << 16)
#define OMAP3430_SETUP_TIME1_SHIFT			0
#define OMAP3430_SETUP_TIME1_MASK			(0xffff << 0)

/* PRM_VOLTOFFSET */
#define OMAP3430_OFFSET_TIME_SHIFT			0
#define OMAP3430_OFFSET_TIME_MASK			(0xffff << 0)

/* PRM_CLKSETUP */
#define OMAP3430_SETUP_TIME_SHIFT			0
#define OMAP3430_SETUP_TIME_MASK			(0xffff << 0)

/* PRM_POLCTRL */
#define OMAP3430_OFFMODE_POL				(1 << 3)
#define OMAP3430_CLKOUT_POL				(1 << 2)
#define OMAP3430_CLKREQ_POL				(1 << 1)
#define OMAP3430_EXTVOL_POL				(1 << 0)

/* PRM_VOLTSETUP2 */
#define OMAP3430_OFFMODESETUPTIME_SHIFT			0
#define OMAP3430_OFFMODESETUPTIME_MASK			(0xffff << 0)

/* PRM_VP1_CONFIG specific bits */

/* PRM_VP1_VSTEPMIN specific bits */

/* PRM_VP1_VSTEPMAX specific bits */

/* PRM_VP1_VLIMITTO specific bits */

/* PRM_VP1_VOLTAGE specific bits */

/* PRM_VP1_STATUS specific bits */

/* PRM_VP2_CONFIG specific bits */

/* PRM_VP2_VSTEPMIN specific bits */

/* PRM_VP2_VSTEPMAX specific bits */

/* PRM_VP2_VLIMITTO specific bits */

/* PRM_VP2_VOLTAGE specific bits */

/* PRM_VP2_STATUS specific bits */

/* RM_RSTST_NEON specific bits */

/* PM_WKDEP_NEON specific bits */

/* PM_PWSTCTRL_NEON specific bits */

/* PM_PWSTST_NEON specific bits */

/* PM_PREPWSTST_NEON specific bits */

#endif
