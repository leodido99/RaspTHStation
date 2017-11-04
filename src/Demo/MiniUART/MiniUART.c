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

void MiniUART_Enable(bool enable) {
	if (enable) {
		pAuxiliaryRegs->AUX_ENABLES = BIT_SET(pAuxiliaryRegs->AUX_ENABLES, __AUXILIARY_IRQ_MU);
	} else {
		pAuxiliaryRegs->AUX_ENABLES = BIT_CLEAR(pAuxiliaryRegs->AUX_ENABLES, __AUXILIARY_IRQ_MU);
	}
}

void MiniUART_Open(void) {

	/* Configure GPIO pin before enabling UART */

	MiniUART_Enable(true);



}



