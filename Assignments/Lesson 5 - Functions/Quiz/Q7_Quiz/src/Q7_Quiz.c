/*
 ============================================================================
 Name        : Q7_Quiz.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int check_power_of_3(int input){ return (input%3 == 0); }

int main(void) {
	int input;
	printf("Input number to be checked : ");
	fflush(stdin); fflush(stdout); scanf("%d", &input);
	printf("%d ==> %d", input, check_power_of_3(input));
	return 0;
}
