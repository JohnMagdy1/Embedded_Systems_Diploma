/*
 ============================================================================
 Name        : MT_Q7.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : c function to sum numbers from 1 to 100(without loop)? *
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sum(int x){
	if(x == 1) return 1;
	else return x+sum(x-1);
}

int main(void) {

	int input;
	printf("input -> ");
	fflush(stdin); fflush(stdout); scanf("%d", &input);

	printf("Output -> %d", sum(input));
	printf("\nOutput -> %d", sum(3));
	printf("\nOutput -> %d", sum(8));
	return 0;
}
