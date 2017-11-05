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

/**
 * Sets the function for the given GPIO pin
 */
void GPIO_SetFunction(uint32_t pin, uint8_t func) {
	uint8_t offset = pin / 10;
	uint32_t reg = pGPIORegs->GPFSEL[offset];
	/* 10 GPIO pins per 32 bit registers */
	uint8_t shift = 3 * (pin % 10);
	reg = reg & ~(0x7 << shift);
	reg = reg | ((func & 0x7) << shift);
	pGPIORegs->GPFSEL[offset] = reg;
}

void GPIO_SetDirection(uint32_t pin, _gpio_direction dir) {
	GPIO_SetFunction(pin, dir);
}

void GPIO_SetValue(uint32_t pin, bool value) {
	uint32_t offset=pin/32;
    uint32_t mask=(1<<(pin%32));
	if(value) {
		pGPIORegs->GPSET[offset] |= mask;
	} else {
		pGPIORegs->GPCLR[offset] |= mask;
	}
}

bool GPIO_GetValue(uint32_t pin) {
	return ((pGPIORegs->GPLEV[pin/32]) >> (pin%32)) & 1;
}

void GPIO_SetDetect(uint32_t pin, _gpio_detect detect) {
	uint32_t mask=(1 << pin);
	uint32_t offset=pin / 32;

	switch(detect) {
	case DETECT_RISING:
		pGPIORegs->GPREN[offset]|=mask;
		break;
	case DETECT_FALLING:
		pGPIORegs->GPFEN[offset]|=mask;
		break;
	case DETECT_HIGH:
		pGPIORegs->GPHEN[offset]|=mask;
		break;
	case DETECT_LOW:
		pGPIORegs->GPLEN[offset]|=mask;
		break;
	case DETECT_RISING_ASYNC:
		pGPIORegs->GPAREN[offset]|=mask;
		break;
	case DETECT_FALLING_ASYNC:
		pGPIORegs->GPAFEN[offset]|=mask;
		break;
	case DETECT_NONE:
		break;
	}
}

void GPIO_ResetDetect(uint32_t pin, _gpio_detect detect) {
	uint32_t mask=~(1 << (pin % 32));
	uint32_t offset=pin / 32;

	switch(detect) {
	case DETECT_RISING:
		pGPIORegs->GPREN[offset]&=mask;
		break;
	case DETECT_FALLING:
		pGPIORegs->GPFEN[offset]&=mask;
		break;
	case DETECT_HIGH:
		pGPIORegs->GPHEN[offset]&=mask;
		break;
	case DETECT_LOW:
		pGPIORegs->GPLEN[offset]&=mask;
		break;
	case DETECT_RISING_ASYNC:
		pGPIORegs->GPAREN[offset]&=mask;
		break;
	case DETECT_FALLING_ASYNC:
		pGPIORegs->GPAFEN[offset]&=mask;
		break;
	case DETECT_NONE:
		break;
	}
}

void GPIO_ClearIRQ(uint32_t pin) {
	uint32_t mask=(1 << (pin % 32));
	uint32_t offset=pin / 32;

	pGPIORegs->GPEDS[offset]=mask;
}
