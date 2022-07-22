/*
 ============================================================================
 Name        : Ex3_strings.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*
 ============================================================================
 Name        : Ex3_strings.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	char s[100];

	printf("Enter a string : "); fflush(stdin); fflush(stdout); gets(s);
	printf("You Entered : %s", s);

	char r[strlen(s)];

	for(int i=0; i<strlen(s); i++){ r[i] = s[strlen(s)-1-i];}

	printf("\nReversed string : %s", r);

}

