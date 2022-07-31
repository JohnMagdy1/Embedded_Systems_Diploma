/*
 ============================================================================
 Name        : Q5_Quiz.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int clear_bit(int input, int pos){
	return input & ~(1 << pos);
}

int main()
{
    int input, pos;
	printf("Input Number : ");
	fflush(stdin); fflush(stdout); scanf("%d", &input);
	printf("Bit position : ");
	fflush(stdin); fflush(stdout); scanf("%d", &pos);

	printf("==>");
	printf("\nresult = %d", clear_bit(input, pos));
    return 0;
}
