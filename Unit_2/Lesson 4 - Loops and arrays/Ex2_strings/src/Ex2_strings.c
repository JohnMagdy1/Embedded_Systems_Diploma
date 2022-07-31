/*
 ============================================================================
 Name        : Ex2_strings.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char s[100];
	int count = 0;

	printf("Enter a string : "); fflush(stdin); fflush(stdout); gets(s);

	for(int i=0; s[i] != '\0'; i++){ count++; }

	printf("\nnumber of chars = %d", count);

}
