/*
 ******************************************************************************
 * @file           : main.c
 * @author         : John Magdy
 ******************************************************************************
*/

#include "Platform_Types.h"

#define RCC_Base 			0x40021000			// Reset and clock control
#define PortA_Base  		0x40010800
#define RCC_APB2ENR			*(volatile uint32_t *)(RCC_Base   + 0x18)
#define PortA_CRH			*(volatile uint32_t *)(PortA_Base + 0x04)

#define RCC_IOPAEN		(1<<2)

typedef union{
		vuint32_t all_fields;
		struct{
			vuint32_t reserverd:13;
			vuint32_t P_13:1;
		} Pin;
} R_ODR_t;

volatile R_ODR_t* R_ODR = (volatile R_ODR_t*)(PortA_Base + 0x0C);
unsigned char g_variables[3] = {1,2,3};
unsigned char const const_variables[3] = {1,2,3};

int main(void)
{
	RCC_APB2ENR |= RCC_IOPAEN;
	PortA_CRH &= 0xFF0FFFFF;
	PortA_CRH |= 0x00200000;

	while(1){
        int i=0;
		R_ODR->Pin.P_13 = 1;
		for(; i<5000; i++); 		// arbitrary delay
		R_ODR->Pin.P_13 = 0;
		for(i=0; i<5000; i++); 		// arbitrary delay
	}
}

