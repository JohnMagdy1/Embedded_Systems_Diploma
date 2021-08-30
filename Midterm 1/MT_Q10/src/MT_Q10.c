/*
 ============================================================================
 Name        : MT_Q10.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : c function to count the max number of ones between two zeros?
 test case 1: input:14(01110) output:3.
 test case 2: input:110(0110 1110). output:3
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int input, count = 0, max_count=0;

	printf("input -> ");
	fflush(stdin); fflush(stdout); scanf("%d", &input);
	printf("Number in binary (displaying only 1 byte)-> ");

	for(int i=7; i>=0; i--){
		if(input & (1<<i)) { printf("1"); count++; }
		else { printf("0"); count=0; }
		if(i%4 == 0) printf(" ");

		if(count>max_count) max_count = count;
	}
	printf("\noutput -> %d", max_count);
	return 0;
}
