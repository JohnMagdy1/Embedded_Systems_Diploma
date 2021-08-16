/*
 ============================================================================
 Name        : Ass2Ex5.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char c = 'z'; //A-65 z-122

	printf("Enter a Character : ");
	fflush(stdin); fflush(stdout); scanf("%c", &c);

	if((c >'a' && c<'z') || (c >'A' && c<'Z')) printf("%c is an alphabet ",c);
	else printf("%c is not an alphabet ",c);

	return 0;
}
