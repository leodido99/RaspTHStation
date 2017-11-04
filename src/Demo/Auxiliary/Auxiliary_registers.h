/*
 * Auxiliary_registers.h
 *
 *  Created on: 4 Nov 2017
 *      Author: leonard.bise
 */

#ifndef AUXILIARY_AUXILIARY_REGISTERS_H_
#define AUXILIARY_AUXILIARY_REGISTERS_H_

#include <stdint.h>

#define __AUXILIARY_BASE_ADDR 0x20215000

typedef struct {
	uint32_t AUX_IRQ;
	uint32_t AUX_ENABLES;
} BCM2835_AUXILIARY_REGS;

volatile BCM2835_AUXILIARY_REGS * const pAuxiliaryRegs = (BCM2835_AUXILIARY_REGS *) (__AUXILIARY_BASE_ADDR);

/**
 * AUXIRQ SPI2 Pending IRQ
 */
#define __AUXILIARY_IRQ_SPI2 2
/**
 * AUXIRQ SPI1 Pending IRQ
 */
#define __AUXILIARY_IRQ_SPI1 1
/**
 * AUXIRQ MiniUART Pending IRQ
 */
#define __AUXILIARY_IRQ_MU 0

/**
 * AUXIRQ SPI2 Enable
 */
#define __AUXILIARY_IRQ_SPI2 2
/**
 * AUXIRQ SPI1 Enable
 */
#define __AUXILIARY_IRQ_SPI1 1
/**
 * AUXIRQ MiniUART Enable
 */
#define __AUXILIARY_IRQ_MU 0

#endif /* AUXILIARY_AUXILIARY_REGISTERS_H_ */
