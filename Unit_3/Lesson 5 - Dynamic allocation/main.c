/*
 ******************************************************************************
 * @file           : main.c
 * @author         : John Magdy
 ******************************************************************************
*/

#include<stdint.h>
#include<stdlib.h>


void* _sbrk (int incr){
	static unsigned char* heap_ptr = NULL;
	unsigned char* prev_heap_ptr = NULL;
	extern unsigned int _E_bss;				/* symbol not a variable*/
	extern unsigned int _heap_end;

	// if first time
	if(heap_ptr == NULL) heap_ptr = (unsigned char*)&_E_bss;
	
	heap_ptr = prev_heap_ptr;

	// protect the stack
	if((heap_ptr + incr) > (unsigned char *)&_heap_end) return (void*)  NULL;

	// booking inc size
	heap_ptr += incr;

	return (void*) prev_heap_ptr;
}

#define SYSCTL_RCGC2_R 			(*(volatile unsigned long*)0x400FE108)
#define GPIO_PORTF_DIR_R 		(*(volatile unsigned long*)0x40025400)
#define GPIO_PORTF_DEN_R		(*(volatile unsigned long*)0x4002551C)
#define GPIO_PORTF_DATA_R 		(*(volatile unsigned long*)0x400253FC)

int main(void)
{
	int* p = (int *)malloc(4);							/*intentionally adding this part*/
	free(p);
	SYSCTL_RCGC2_R = 0x20;								/*to enable the clock of the portf*/
	volatile int i=0;
	for(;i<200; i++);									/*delay to make sure that GPIO is up*/
	GPIO_PORTF_DIR_R = GPIO_PORTF_DEN_R |= 1<<3;		/*direction is out in pin 3 in port F && digital I/O is enabled */

	while(1){
		GPIO_PORTF_DATA_R |= 1<<3;
		for(i=0; i<200000; i++); 		// arbitrary delay
		GPIO_PORTF_DATA_R &= ~(1<<3);
		for(i=0; i<200000; i++); 		// arbitrary delay
	}
	return 0;
}

