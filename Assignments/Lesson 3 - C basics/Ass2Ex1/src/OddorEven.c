/*
 ============================================================================
 Name        : HW2.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main() {

	int input;
	printf("Enter an integer to check : ");
	fflush(stdin); fflush(stdout); scanf("%d", &input);

	if(input%2==0) printf("%d is even", input);
	else printf("%d is odd", input);

	return 0;
}
