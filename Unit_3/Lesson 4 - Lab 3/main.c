/*
 ******************************************************************************
 * @file           : main.c
 * @author         : John Magdy
 ******************************************************************************
*/

#define SYSCTL_RCGC2_R 			(*(volatile unsigned long*)0x400FE108)
#define GPIO_PORTF_DIR_R 		(*(volatile unsigned long*)0x40025400)
#define GPIO_PORTF_DEN_R		(*(volatile unsigned long*)0x4002551C)
#define GPIO_PORTF_DATA_R 	(*(volatile unsigned long*)0x400253FC)

int main(void)
{
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

