/*
 ============================================================================
 Name        : Q3_Quiz.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void print_array(int array[], int length){
	for(int i=0; i<length; i++){
		printf("%d", array[i]);
		if(i != (length-1)) printf(", ");
	}
	printf("\n");
}

void swap_array(int org[], int cpy[], int length){
	for(int i=0; i<length; i++){cpy[i] = org[length-i-1];}
}

int main(void) {

	int input, arr_size;
	printf("Enter required number of elements in your array : ");
	fflush(stdin); fflush(stdout); scanf("%d", &arr_size);

	int array[arr_size], revarray[arr_size];

	printf("Enter your array elements : ");
	for(int i=0; i<arr_size; i++){
		fflush(stdin); fflush(stdout); scanf("%d", &input);
		array[i] = input;
	}

	printf("input -> "); print_array(array, arr_size);
	swap_array(array, revarray, arr_size);
	printf("output -> "); print_array(revarray, arr_size);

	return 0;
}
