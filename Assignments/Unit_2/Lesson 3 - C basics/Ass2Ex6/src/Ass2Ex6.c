/*
 ============================================================================
 Name        : Ass2Ex6.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	int input, sum=0;

	printf("Enter an integer : ");
	fflush(stdin); fflush(stdout); scanf("%d", &input);

	for(int i=1; i<=input; i++) { sum += i;}

	printf("Sum = %d", sum);

	return 0;
}
