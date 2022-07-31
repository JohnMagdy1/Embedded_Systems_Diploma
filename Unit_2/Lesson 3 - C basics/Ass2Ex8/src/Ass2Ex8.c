/*
 ============================================================================
 Name        : Ass2Ex8.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	char input;
	printf("Enter operator {'+', '-', '*', '/'} : ");
	fflush(stdin); fflush(stdout); scanf("%c", &input);

	float x,y;
	printf("Enter two operands : ");
	fflush(stdin); fflush(stdout); scanf("%f %f", &x, &y);

	if(input == '+') { printf("%.1f + %.1f = %.1f", x, y, (x+y));}
	else if(input == '-') { printf("%.1f - %.1f = %.1f", x, y, (x-y));}
	else if(input == '*') { printf("%.1f * %.1f = %.1f", x, y, (x*y));}
	else if(input == '/') { printf("%.1f / %.1f = %.1f", x, y, (x/y));}

	return 0;
}
