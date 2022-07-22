#ifndef M_H
#define M_H

#include "Platform_Types.h"

#define RCC_Base 			0x40021000			// Reset and clock control
#define PortA_Base  		0x40010800
#define RCC_APB2ENR			*(volatile uint32_t *)(RCC_Base   + 0x18)
#define PortA_CRH			*(volatile uint32_t *)(PortA_Base + 0x04)

#define RCC_IOPAEN		(1<<2)

//  you can 
// #define PortA_ODR			*(volatile uint32_t *)(PortA_Base + 0x0C)

// or instead for a more professional way you can

typedef union{
		vuint32_t all_fields;
		struct{
			vuint32_t reserverd:13;
			vuint32_t P_13:1;
		} Pin;
} R_ODR_t;

volatile R_ODR_t* R_ODR = (volatile R_ODR_t*)(PortA_Base + 0x0C);

#endif