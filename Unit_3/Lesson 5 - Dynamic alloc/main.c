/*
 ******************************************************************************
 * @file           : main.c
 * @author         : John Magdy
 ******************************************************************************
*/

#include "Platform_Types.h"
#include<stdint.h>
#include<stdlib.h>


void* _sbrk (int incr){
	static unsigned char* heap_ptr = NULL;
	unsigned char* prev_heap_ptr = NULL;
	extern unsigned int _E_bss;				//symbol not a variable
	extern unsigned int _heap_end;

	// if first time
	if(heap_ptr == NULL) heap_ptr = (unsigned char*)&_E_bss;
	
	prev_heap_ptr = heap_ptr;

	// protect the stack
	if((heap_ptr + incr) > (unsigned char *)&_heap_end) return (void*) NULL;

	// booking inc size
	heap_ptr += incr;

	return (void*) prev_heap_ptr;
}



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
volatile unsigned char bss_var[3];

int main(void)
{
	int* p = (int *)malloc (4);							/*intentionally adding this part*/
	
	RCC_APB2ENR |= RCC_IOPAEN;
	PortA_CRH 	&= 0xFF0FFFFF;
	PortA_CRH 	|= 0x00200000;

	while(1){
        int i=0;
		R_ODR->Pin.P_13 = 1;
		for(; i<5000; i++); 		// arbitrary delay
		R_ODR->Pin.P_13 = 0;
		for(i=0; i<5000; i++); 		// arbitrary delay
	}
	free (p);
}

