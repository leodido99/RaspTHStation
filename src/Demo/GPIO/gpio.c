/*
 * gpio.c
 *
 *  Created on: 4 Nov 2017
 *      Author: leonard.bise
 */
#include "gpio.h"
#include "gpio_registers.h"

/*
 * 0-2   : Pin 0
 * 5-3   : Pin 1
 * 8-6   : Pin 2
 * 11-9  : Pin 3
 * 14-12 : Pin 4
 * 17-15 : Pin 5
 * 20-18 : Pin 6
 * 23-21 : Pin 7
 * 26-24 : Pin 8
 * 29-27 : Pin 9
 */

void GPIO_SetFunction(uint32_t pin, _gpio_func func) {
	uint8_t offset = pin / 10;
	uint32_t reg = pGPIORegs->GPFSEL[offset];
	/* 10 GPIO pins per 32 bit registers */

	reg = (func << (pin % 10));



}

