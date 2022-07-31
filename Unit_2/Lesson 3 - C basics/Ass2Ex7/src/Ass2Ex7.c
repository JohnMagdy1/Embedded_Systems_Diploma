/*
 ============================================================================
 Name        : Ass2Ex7.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	int input, factorial=1;

	printf("Enter an integer : ");
	fflush(stdin); fflush(stdout); scanf("%d", &input);

	if(input >= 0){
		for(int i=1; i<=input; i++) { factorial *= i;}
		printf("factorial = %d", factorial);
	}else printf("Error!!! factorial of negative number doesn't exist");

	return 0;
}
