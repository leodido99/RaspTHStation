/*
 * gpio_registers.h
 *
 *  Created on: 4 Nov 2017
 *      Author: leonard.bise
 */

#ifndef SRC_DEMO_GPIO_GPIO_REGISTERS_H_
#define SRC_DEMO_GPIO_GPIO_REGISTERS_H_

#include <stdint.h>

/* Physical addresses range from 0x20000000 to 0x20FFFFFF for peripherals. */
#define __GPIO_BASE_ADDR 0x20200000

typedef struct {
	uint32_t GPFSEL[6];	///< Function selection registers.
	uint32_t Reserved_1;
	uint32_t GPSET[2];
	uint32_t Reserved_2;
	uint32_t GPCLR[2];
	uint32_t Reserved_3;
	uint32_t GPLEV[2];
	uint32_t Reserved_4;
	uint32_t GPEDS[2];
	uint32_t Reserved_5;
	uint32_t GPREN[2];
	uint32_t Reserved_6;
	uint32_t GPFEN[2];
	uint32_t Reserved_7;
	uint32_t GPHEN[2];
	uint32_t Reserved_8;
	uint32_t GPLEN[2];
	uint32_t Reserved_9;
	uint32_t GPAREN[2];
	uint32_t Reserved_A;
	uint32_t GPAFEN[2];
	uint32_t Reserved_B;
	uint32_t GPPUD[1];
	uint32_t GPPUDCLK[2];
	/* Ignoring the reserved and test bytes */
} BCM2835_GPIO_REGS;

volatile BCM2835_GPIO_REGS * const pGPIORegs = (BCM2835_GPIO_REGS *) (__GPIO_BASE_ADDR);

#endif /* SRC_DEMO_GPIO_GPIO_REGISTERS_H_ */
