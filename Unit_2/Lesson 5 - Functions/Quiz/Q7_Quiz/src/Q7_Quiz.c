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
#include <math.h>

int check_power_of_3(int input){

	while (input % 3 == 0) { input /= 3; }
	return input==1;

}

int check_power_of_3_v2(int input){

	double flag = log(input) / log(3);
	return (flag == trunc(flag));

}

int main(void) {
	int input;
	printf("Input number to be checked : ");
	fflush(stdin); fflush(stdout); scanf("%d", &input);
	printf("%d ==> %d", input, check_power_of_3(input));
	printf("\n%d ==> %d", input, check_power_of_3_v2(input));
	return 0;
}
