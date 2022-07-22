/*
 ============================================================================
 Name        : Q8_Quiz.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int last_occ(int arr[], int input, int arr_len){
	for(int i=arr_len-1; i>0; i--){
		if(input == arr[i]) return i+1;
	}
	return 0;
}

int first_occ(int arr[], int input, int arr_len){
	for(int i=0; i<=arr_len; i++){
		if(input == arr[i]) return i+1;
	}
	return -1;
}

int main(void) {

	int input, arr_len, x;
	printf("Enter required number of elements in your array : ");
	fflush(stdin); fflush(stdout); scanf("%d", &arr_len);

	int array[arr_len];
	printf("Enter your array elements : ");
	for(int i=0; i<arr_len; i++){
		fflush(stdin); fflush(stdout); scanf("%d", &input);
		array[i] = input;
	}

	printf("Enter the searched for element : ");
	fflush(stdin); fflush(stdout); scanf("%d", &x);

	printf("last occ -> %d", last_occ(array, x, arr_len));
	printf("\nfirst occ -> %d", first_occ(array, x, arr_len));

	return 0;
}
