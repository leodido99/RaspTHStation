/*
 * gpio.h
 *
 *  Created on: 4 Nov 2017
 *      Author: leonard.bise
 */

#ifndef SRC_DEMO_GPIO_GPIO_H_
#define SRC_DEMO_GPIO_GPIO_H_

#include <stdint.h>
#include <stdbool.h>

typedef enum {
	GPIO_INPUT,
	GPIO_OUTPUT
} _gpio_direction;

typedef enum {
	DETECT_NONE,
	DETECT_RISING,
	DETECT_FALLING,
	DETECT_HIGH,
	DETECT_LOW,
	DETECT_RISING_ASYNC,
	DETECT_FALLING_ASYNC
} _gpio_detect;

void GPIO_SetFunction(uint32_t pin, uint8_t func);

void GPIO_SetDirection(uint32_t pin, _gpio_direction dir);

void GPIO_SetValue(uint32_t pin, bool value);

bool GPIO_GetValue(uint32_t pin);

void GPIO_SetDetect(uint32_t pin, _gpio_detect detect);

void GPIO_ResetDetect(uint32_t pin, _gpio_detect detect);

void GPIO_ClearIRQ(uint32_t pin);

#endif /* SRC_DEMO_GPIO_GPIO_H_ */
