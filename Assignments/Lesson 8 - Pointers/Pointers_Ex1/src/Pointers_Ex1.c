/*
 ============================================================================
 Name        : Pointers_Ex1.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Write a program in C to demonstrate how to handle the pointers
in the program.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define prt_int(x, name) printf("Address of %s : %x\n", name, (unsigned int)&x);\
						 printf("Value of %s : %d\n\n", name, x)
#define prt_ptr(p, name) printf("Address of pointer %s : %x\n", name, (unsigned int)p);\
						 printf("Content of pointer %s : %d\n\n", name, *p)


int main(void) {

	int m = 29;
	prt_int(m, "m");

	int* ab = &m;
	printf("Now ab is assigned with the address of m.\n");
	prt_ptr(ab, "ab");

	m = 34;
	printf("The value of m assigned to 34 now.\n");
	prt_ptr(ab, "ab");

	*ab = 7;
	printf("The pointer variable ab is assigned with the value 7 now.\n");
	prt_int(m, "m");
}
