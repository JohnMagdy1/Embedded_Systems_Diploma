/*
 ============================================================================
 Name        : MT_Q1.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
/*
1)c function to take a number and sum all digits?
		test case 1: input:123 ->output:6
		test case 2: input:4565 ->output:20 */

int main() {

	int input, sum = 0, pos = 1, num_count = 0;

	printf("input -> ");
	fflush(stdin); fflush(stdout); scanf("%d", &input);

	int input_copy = input;

	while(input_copy != 0){ num_count++; input_copy /= 10;}

	for(int i=0; i<num_count; i++){
		sum += (input/pos)%10;
		pos *= 10;
	}

	printf("output -> %d", sum);

	return 0;
}
