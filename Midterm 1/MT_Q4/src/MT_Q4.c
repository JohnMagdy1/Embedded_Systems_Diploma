/*
 ============================================================================
 Name        : MT_Q4.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
/*
c function to revers digits in number?
		test case 1: input:2457 ->output:7542 .
		test case 2: input:1057 ->output:7501. */

int main(void) {

	int input, sum = 0, num_count = 0, arr[100];
	printf("input -> ");
	fflush(stdin); fflush(stdout); scanf("%d", &input);

	// function to determine number of digits in a number
	int input_copy = input;
	while(input_copy != 0){ num_count++; input_copy /= 10;}

	// function to take the digits one by one and save them in the array
	for(int i=0, pos=1; i<num_count; i++){
		arr[i] = (input/pos)%10;
		pos *= 10;
	}

	// function to take the reversed digits and put them back in a number
	for(int i=0, pos=1; i<num_count; i++){
		sum += arr[num_count-i-1]*pos;
		pos *= 10;
	}

	printf("output -> %d", sum);
	return 0;
}
