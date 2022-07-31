/*
 ============================================================================
 Name        : Q1_Quiz.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

void check_username(char name[], char input[]){

	!strcmp(name, input)? printf("Correct Username"):printf("Not a correct username");
}


int main(void) {
	char username[] = "John Magdy";
	char input[30];
	printf("Input username : ");
	fflush(stdin); fflush(stdout); gets(input);
	check_username(username, input);
	return 0;
}


