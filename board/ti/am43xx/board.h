/*
 * board.h
 *
 * TI AM437x boards information header
 * Derived from AM335x board.
 *
 * Copyright (C) 2013, Texas Instruments, Incorporated - http://www.ti.com/
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef _BOARD_H_
#define _BOARD_H_

#include <asm/arch/omap.h>

#define DEV_ATTR_MAX_OFFSET    5
#define DEV_ATTR_MIN_OFFSET    0

static inline int board_is_eposevm(void)
{
	return board_am_is("AM43EPOS");
}

static inline int board_is_gpevm(void)
{
	return board_am_is("AM43__GP");
}
static inline int board_is_ph8800(void)
{
	return board_am_is("SOM-PH88");
}
static inline int board_is_ec8800(void)
{
	return board_am_is("SBC-EC88");
}



static inline int board_is_sk(void)
{
	return board_am_is("AM43__SK");
}

static inline int board_is_idk(void)
{
	return board_am_is("AM43_IDK");
}

static inline int board_is_evm_14_or_later(struct ti_am_eeprom *header)
{
	return (board_is_gpevm() && strncmp("1.4", header->version, 3) <= 0);
}

static inline int board_is_evm_12_or_later(struct ti_am_eeprom *header)
{
	return (board_is_gpevm() && strncmp("1.2", header->version, 3) <= 0);
}

void enable_uart0_pin_mux(void);
void enable_board_pin_mux(void);
void enable_i2c0_pin_mux(void);
#endif
