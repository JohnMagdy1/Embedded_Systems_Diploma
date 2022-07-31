/*
 ============================================================================
 Name        : Ex3_Functions.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void reverse(){

	char c;
	fflush(stdout); scanf("%c", &c);
	if(c != '\n'){
		reverse();
		printf("%c", c);
	}
}


int main(void) {

	printf("Enter a sentence : ");
	reverse();
	return 0;
}
