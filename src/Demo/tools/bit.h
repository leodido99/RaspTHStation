/*
 * bit.h
 *
 *  Created on: 4 Nov 2017
 *      Author: leonard.bise
 */

#ifndef TOOLS_BIT_H_
#define TOOLS_BIT_H_


#define BIT_SET(val, bit) (val | (1 << bit))

#define BIT_CLEAR(val, bit) (val & ~(1 << bit))


#endif /* TOOLS_BIT_H_ */
