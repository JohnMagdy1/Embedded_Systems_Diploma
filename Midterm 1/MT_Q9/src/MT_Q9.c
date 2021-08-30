/*
 ============================================================================
 Name        : MT_Q9.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : c function to reverse words in string?
 test case : input: mohamed gamal. output:gamal mohamed
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	char name[100];
	printf("Enter a string : "); fflush(stdin); fflush(stdout); gets(name);

	char reversed_string[strlen(name)]; int space_pos;
	reversed_string[strlen(name)]; int space_pos;
	for(int i=0; i<strlen(name); i++){ if(name[i] == ' ') space_pos=i;}

	int second_word_len = (strlen(name)-space_pos-1);

	for(int i=0, j=0; i<strlen(name); i++){
		if(i < second_word_len) reversed_string[i] = name[i+space_pos+1];
		else if(i == second_word_len) reversed_string[i] = ' ';
		else reversed_string[i] = name[j++];
	}

	for(int i=0; i<strlen(name); i++){printf("%c", reversed_string[i]);}
	return 0;
}
