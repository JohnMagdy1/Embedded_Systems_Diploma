/*
 ============================================================================
 Name        : MT_Q8.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : c function to take an array and revers its elements?
 test case 1: input: int a[5]={1,2,3,4,5}; output:5 4 3 2 1
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int arr_size;

	printf("How many numbers you wanna enter? ");
	fflush(stdin); fflush(stdout); scanf("%d", &arr_size);

	int input_arr[arr_size], reverse_arr[arr_size];

	for(int i=0; i<arr_size; i++) {
		printf("Enter element number %d : ", i+1);
		fflush(stdin); fflush(stdout); scanf("%d", &input_arr[i]);
	}

	for(int i=0; i<arr_size; i++) { reverse_arr[i] = input_arr[arr_size-1-i];}

	printf("Input : ");
	for(int i=0; i<arr_size; i++) {printf("%d ", input_arr[i]);}

	printf("\nOutput : ");
	for(int i=0; i<arr_size; i++) {printf("%d ", reverse_arr[i]);}
}
