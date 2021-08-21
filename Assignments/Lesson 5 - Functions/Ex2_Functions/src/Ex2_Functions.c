/*
 ============================================================================
 Name        : Ex2_Functions.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int Factorial(int num){

	if (num != 1)
	return num * Factorial(num-1);

}


int main(void) {

	int input;
	printf("Enter a positive integer : ");
	fflush(stdin); fflush(stdout); scanf("%d", &input);

	printf("result : %d", Factorial(input));

	return 0;
}
