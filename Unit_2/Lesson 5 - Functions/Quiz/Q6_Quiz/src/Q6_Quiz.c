/*
 ============================================================================
 Name        : Q6_Quiz.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int bit_4_check(int num){return (num & 4)? 1:0;}

int main(void) {

	for(int i=0; i<30; i++) {printf("%d -> %d\n", i, bit_4_check(i));}

	return 0;
}
