/*
 ============================================================================
 Name        : HW1.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main() {
	//EX1:
	printf("C Programming");

	//EX2:
	int x;
	printf("\nEnter a integer: ");
	fflush(stdin); fflush(stdout); scanf("%d", &x);
	printf("You entered: %d", x);

	//EX3:
	int y;
	printf("\nEnter two integers: ");
	fflush(stdin); fflush(stdout); scanf("%d %d",&x,&y);
	printf("Sum: %d", x+y);

	//EX4:
	float a,b;
	printf("\nEnter two numbers: ");
	fflush(stdin); fflush(stdout); scanf("%f %f",&a,&b);
	printf("Product:  %f", a*b);

	//EX5:
	char c;
	printf("\nEnter a character: ");
	fflush(stdin); fflush(stdout); scanf("%c", &c);
	printf("ASCII value of %c = %d", c,c);

	//EX6:
	printf("\nEnter value of a: ");
	fflush(stdin); fflush(stdout); scanf("%f", &a);
	printf("Enter value of b: ");
	fflush(stdin); fflush(stdout); scanf("%f", &b);

	float temp = a; a=b; b=temp;

	printf("After swapping, value of a = %f", a);
	printf("\nAfter swapping, value of b = %f", b);

	return 0;
}
