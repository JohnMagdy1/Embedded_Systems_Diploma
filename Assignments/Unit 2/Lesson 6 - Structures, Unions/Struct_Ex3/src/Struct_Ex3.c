/*
 ============================================================================
 Name        : Struct_Ex3.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : c program to add two complex numbers using struct
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct S_Complex{
	float real;
	float imag;
};

struct S_Complex read_Complex(char d_title[20]){
	struct S_Complex input;

	printf("\nTaking the information of %s", d_title);

	printf("\nEnter real part : ");
	fflush(stdin); fflush(stdout); scanf("%f", &input.real);

	printf("Enter imaginary part : ");
	fflush(stdin); fflush(stdout); scanf("%f", &input.imag);

	return input;
};


struct S_Complex add_2_complex_numbers(struct S_Complex c1, struct S_Complex c2){
	struct S_Complex sum;
	sum.real = c1.real + c2.real;
	sum.imag = c1.imag + c2.imag;
	return sum;
};

int main(void) {

	struct S_Complex c1 = read_Complex("c1");
	struct S_Complex c2 = read_Complex("c2");
	struct S_Complex sum = add_2_complex_numbers(c1, c2);

	printf("\nsum of numbers = %.1f", sum.real);
	if(sum.imag>0) printf("+");
	printf("%.1fi", sum.imag);
	return 0;
}
