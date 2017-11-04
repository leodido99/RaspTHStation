/*
 * Auxiliary_registers.h
 *
 *  Created on: 4 Nov 2017
 *      Author: leonard.bise
 */

#ifndef AUXILIARY_AUXILIARY_REGISTERS_H_
#define AUXILIARY_AUXILIARY_REGISTERS_H_

#define __AUXILIARY_REG_BASE 0x7E215000

/**
 * AUXIRQ Register
 */
#define __AUXILIARY_IRQ (__AUXILIARY_REG_BASE + 0x0)

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
 * AUXENB Register
 */
#define __AUXILIARY_ENABLES (__AUXILIARY_REG_BASE + 0x4)

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
