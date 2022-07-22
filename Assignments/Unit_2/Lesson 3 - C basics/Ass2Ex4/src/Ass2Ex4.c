/*
 ============================================================================
 Name        : Ass2Ex4.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("Enter a number : ");
	int input;
	fflush(stdin); fflush(stdout); scanf("%d", &input);

	(input>0)? printf("%d is positive", input) : (input<0)? printf("%d is negative", input) : printf("you entered zero");

	return 0;
}
