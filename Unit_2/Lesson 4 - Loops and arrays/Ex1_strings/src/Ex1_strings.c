/*
 ============================================================================
 Name        : Ex1_strings.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char s[100], input; int freq=0; float count=0;

	printf("Enter a string : "); fflush(stdin); fflush(stdout); gets(s);

	printf("Enter a character to find frequency: ");
	fflush(stdin); fflush(stdout); scanf("%c", &input);

	for(int i=0; s[i] != '\0'; i++){ count++; if(input == s[i]) freq++; }
	printf("\nnumber of chars = %.2f", count);
	printf("\nfrequency of %c = %d", input, freq);
	printf("\nfrequency of %c percentage = %.2f %%", input, 100*freq/count);
}
