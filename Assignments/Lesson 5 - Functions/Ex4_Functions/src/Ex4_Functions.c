/*
 ============================================================================
 Name        : Ex4_Functions.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int powerwithoutrecur(int num){

	int power=0;
	for(int i=0; i<num; i++){power += num;}
	return power;
}

//2^3 = 2x2x2

int power(int b, int p){

	if(p == 1) return b;
	else return b * power(b, p-1);
}


int main(void) {

	int b,p;
	printf("Enter base number : ");
	fflush(stdin); fflush(stdout); scanf("%d", &b);

	printf("Enter power number (a positive integer) : ");
	fflush(stdin); fflush(stdout); scanf("%d", &p);

	printf("%d^%d = %d", b, p, power(b,p));

	return 0;
}
