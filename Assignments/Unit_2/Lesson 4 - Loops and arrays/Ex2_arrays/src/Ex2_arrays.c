/*
 ============================================================================
 Name        : Ex2_arrays.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int count; float sum=0;

	printf("How many numbers you wanna enter? ");
	fflush(stdin); fflush(stdout); scanf("%d", &count);

	float arr[count];

	for(int i=0; i<sizeof(arr)/sizeof(int); i++) {
		printf("Enter element number %d : ", i+1);
		fflush(stdin); fflush(stdout); scanf("%f", &arr[i]);
		sum += arr[i];
	}
	printf("Elements are ->\t");
	for(int i=0; i<sizeof(arr)/sizeof(int); i++) {printf("%.2f\t", arr[i]);}
	printf("|| Sum = %.2f\t || Average = %.2f\n", sum, sum/count);

	return 0;
}
