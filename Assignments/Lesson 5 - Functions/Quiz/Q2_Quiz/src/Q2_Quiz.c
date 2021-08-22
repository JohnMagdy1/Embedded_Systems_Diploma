/*
 ============================================================================
 Name        : Q2_Quiz.c
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

void swap_array(int a[], int a_len, int b[], int b_len){

	int temp[100];
	for(int i=0; i<b_len; i++){ temp[i] = b[i]; }
	for(int i=0; i<a_len; i++){	b[i] = a[i]; }
	for(int i=0; i<b_len; i++){	a[i] = temp[i];}
}

int main(void) {

	int a[] = {1,2,3}, a_size = sizeof(a)/sizeof(a[0]);
	int b[] = {1,2,3,4,5}, b_size = sizeof(b)/sizeof(b[0]);
	printf("/////Before\n"); print_array(a, a_size); print_array(b, b_size);

	swap_array(a, a_size, b, b_size);
	printf("\n/////After\n"); print_array(a, a_size); print_array(b, b_size);

	return 0;
}
