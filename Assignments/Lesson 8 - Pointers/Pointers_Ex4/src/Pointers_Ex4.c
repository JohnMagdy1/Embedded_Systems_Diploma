/*
 ============================================================================
 Name        : Pointers_Ex4.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define scanf_int(__va_args__) fflush(stdin); fflush (stdout); scanf("%d", &__va_args__)

int main(void) {

	int arr_size;
	printf("Input the number of elements to store in the array (max 15) : 5 -> ");
	scanf_int(arr_size);

	int arr[arr_size];
	int* p_arr = arr;

	printf("\nInput %d number of elements in the array :\n", arr_size);
	for(int i=1; i<=arr_size; i++){
		printf("element - %d: ", i);
		scanf_int(arr[i]);
		p_arr++;
	}

	printf("\nThe elements of array in reverse order are :");
	for(int i=arr_size; i != 0; i--) printf("\nelement - %d: %d", i, *(p_arr--));

	return 0;
}
