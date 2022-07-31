/*
 ============================================================================
 Name        : Pointers_Ex3.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Write a program in C to print a string in reverse using a pointer
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int size = 0;
	char arr[100];
	char* p_arr = arr;

	printf("Enter sentence -> ");
	fflush(stdin); fflush (stdout); gets(arr);

	while(*p_arr) {
		p_arr++;
		size++;
	}


	while(size--) printf("%c", *(--p_arr));

	return 0;
}

/*printf("p_arr is pointing towards %c in address 0x%x\n",
		*p_arr, (unsigned int)p_arr);*/

/*while(size--) printf("p_arr is pointing towards %c in address 0x%x\n",
		*(--p_arr), ((unsigned int)(p_arr-1)));*/
