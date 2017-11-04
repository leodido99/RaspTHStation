/*
 * memory.h
 *
 *  Created on: 4 Nov 2017
 *      Author: leonard.bise
 */

#ifndef TOOLS_MEMORY_H_
#define TOOLS_MEMORY_H_

#define READ32(addr) (*(uint32_t*)(addr))

#define WRITE32(addr, value) (*(uint32_t*)(addr) = value)

#endif /* TOOLS_MEMORY_H_ */
