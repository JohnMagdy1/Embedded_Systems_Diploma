/*
 ============================================================================
 Name        : Pointers_Ex2.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Write a program in C to print all the alphabets using a pointer.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char c = 'a';
	char* pc = &c;

	for(int i=0; i<26; i++) {
		printf("%c\t" , *pc+i);
		if((i+1)%7 == 0) printf("\n"); // to make the printing format readable
	}

	return 0;

}
