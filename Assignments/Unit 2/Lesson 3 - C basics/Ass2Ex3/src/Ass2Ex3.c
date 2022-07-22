/*
 ============================================================================
 Name        : Ass2Ex3.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	float a,b,c;
	printf("Enter three numbers : ");
	fflush(stdin); fflush(stdout); scanf("%f %f %f", &a, &b, &c);

	if(a>b) { printf("Largest Number is : %f", (a>c)?a:c);}
	else{ printf("Largest Number is : %f", (b>c)?b:c);}

	return 0;
}
