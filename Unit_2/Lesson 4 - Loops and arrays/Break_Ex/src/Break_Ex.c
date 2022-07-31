/*
 ============================================================================
 Name        : Break_Ex.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int count; float input, sum=0;

	printf("How many numbers you wanna enter? ");
	fflush(stdin); fflush(stdout); scanf("%d", &count);

	for(int i=0; i<count; i++) {
		printf("Enter element number %d : ", i+1);
		fflush(stdin); fflush(stdout); scanf("%f", &input);

		if(input < 0) break;

		sum += input;
	}

	printf("Sum = %.2f\n", sum);
	printf("Average = %.2f", sum/count);

	return 0;
}
