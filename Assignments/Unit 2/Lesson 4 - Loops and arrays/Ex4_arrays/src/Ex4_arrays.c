/*
 ============================================================================
 Name        : Ex4_arrays.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int count, input, loc;
	printf("Enter number of elements : ");
	fflush(stdin); fflush(stdout); scanf("%d", &count);

	int elements[count], output[count+1];
	for(int i=0; i<count; i++){fflush(stdin); scanf("%d", &elements[i]);}
	for(int i=0; i<count; i++){fflush(stdin); printf("%d\t", elements[i]);}

	printf("\nEnter element to be inserted : ");
	fflush(stdin); fflush(stdout); scanf("%d", &input);

	printf("Enter the location : ");
	fflush(stdin); fflush(stdout); scanf("%d", &loc); loc--;

	for(int i=0; i<count+1; i++){
	    if(i < loc) output[i] = elements[i];
	    else if(i == loc) output[i] = input;
	    else output[i] = elements[i-1];
	}
	for(int i=0; i<count+1; i++){fflush(stdin); printf("%d\t", output[i]);}

}
