/*
 ============================================================================
 Name        : Ex5_arrays.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int count, input, i;
	printf("Enter number of elements : ");
	fflush(stdin); fflush(stdout); scanf("%d", &count);

	int elements[count];
	for(i=0; i<count; i++){fflush(stdin); scanf("%d", &elements[i]);}
	for(i=0; i<count; i++){fflush(stdin); printf("%d\t", elements[i]);}

	printf("\nEnter element to be searched : ");
	fflush(stdin); fflush(stdout); scanf("%d", &input);

	for(i=0; i<count; i++){
		if (input == elements[i]) printf("Number found at location : %d", i+1);
	}
	if(i == count) printf("Sorry! Number not found");


}
