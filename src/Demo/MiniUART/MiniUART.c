/*
 * MiniUART.c
 *
 *  Created on: 4 Nov 2017
 *      Author: leonard.bise
 */
#include "MiniUART.h"
#include "MiniUART_registers.h"
#include "Auxiliary_registers.h"
#include "memory.h"
#include "bit.h"
#include <stdbool.h>
#include <stdint.h>

void MiniUART_Enable(bool enable) {
	uint32_t reg;
	/* Enable the MiniUART */
	reg = READ32(__AUXILIARY_ENABLES);
	if (enable) {
		reg = BIT_SET(reg, __AUXILIARY_IRQ_MU);
	} else {
		reg = BIT_CLEAR(reg, __AUXILIARY_IRQ_MU);
	}
	WRITE32(__AUXILIARY_ENABLES, reg);
}

void MiniUART_Open(void) {

	/* Configure GPIO pin before enabling UART */

	MiniUART_Enable(true);



}



