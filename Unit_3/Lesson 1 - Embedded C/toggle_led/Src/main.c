/**
 ******************************************************************************
 * @file           : main.c
 * @author         : John Magdy
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */

#include "Memory_map.h"

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

