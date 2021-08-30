/*
 ============================================================================
 Name        : MT_Q2.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* c function to take an integer number and calculate it's square root?
test case 1: input:4 ->output:2.000
test case 2: input:10 ->output:3.126*/

float square_root(int input){

	int flag = 1;
	float result = 1;

	while(flag && (result<=input)){
		if((input - result*result) < 0.0001) { flag=0; return result; }
		else  result += 0.0001;
	}
	return 0;
}

int main(){

	int input;
	printf("input -> ");
	fflush(stdin); fflush(stdout); scanf("%d", &input);

	printf("Output -> %.3f", square_root(input));
	printf("\nOutput from sqrt in math.h -> %.3f", sqrt(input));
}
