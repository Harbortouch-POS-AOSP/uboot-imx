/*
 * Copyright (C) 2016 Freescale Semiconductor, Inc.
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef _ASM_ARCH_CLOCK_H
#define _ASM_ARCH_CLOCK_H

#include <common.h>
#include <asm/arch/pcc.h>
#include <asm/arch/scg.h>

/* Mainly for compatible to imx common code. */
enum mxc_clock {
	MXC_ARM_CLK = 0,
	MXC_AHB_CLK,
	MXC_IPG_CLK,
	MXC_UART_CLK,
	MXC_CSPI_CLK,
	MXC_AXI_CLK,
	MXC_DDR_CLK,
	MXC_ESDHC_CLK,
	MXC_ESDHC2_CLK,
	MXC_I2C_CLK,
};

u32 mxc_get_clock(enum mxc_clock clk);
u32 get_lpuart_clk(void);
#ifdef CONFIG_MXC_OCOTP
void enable_ocotp_clk(unsigned char enable);
#endif
#ifdef CONFIG_USB_EHCI
void enable_usboh3_clk(unsigned char enable);
#endif
void init_clk_usdhc(u32 index);
void clock_init(void);
#endif