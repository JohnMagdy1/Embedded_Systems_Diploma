/*
 ============================================================================
 Name        : Ass2Ex2.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main() {

	char c;
	printf("Enter an alphabet to check : ");
	fflush(stdin); fflush(stdout); scanf("%c", &c);

	if(c == 'a') printf("%c is vowel", c);
	else if(c == 'o') printf("%c is vowel", c);
	else if(c == 'u') printf("%c is vowel", c);
	else if(c == 'e') printf("%c is vowel", c);
	else if(c == 'i') printf("%c is vowel", c);
	else  printf("%c is consonant", c);

	return 0;
}
