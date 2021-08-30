/*
 ============================================================================
 Name        : MT_Q5.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*c function to count number of ones in binary number?
 * test case 1: input:5 ->output: 2 --->binary of 5 is 0101 so has 2 one's
 * test case 2: input:15 ->output:4*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int input, count = 0;
	printf("input -> ");
	fflush(stdin); fflush(stdout); scanf("%d", &input);

	printf("Number in binary (assuming int is 4 bytes)-> ");
	for(int i=31; i>=0; i--){
		if(input & (1<<i)) {printf("1"); count++;}
		else printf("0");
	}
	printf("\noutput -> %d", count);
	return 0;
}
