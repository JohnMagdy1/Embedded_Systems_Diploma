/*
 ============================================================================
 Name        : MT_Q6.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : c function to return unique number in array with one loop?
 test case 1: input: int a[7]={4,2,5,2,5,7,4}; output:7.
 test case 2: input: int a[3]={4,2,4}; output:2.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int find_unique(int arr[], int arr_size){

	int result;
	for(int i=0; i<arr_size; i++){
		for(int j=i+1; j<arr_size; j++){
			if(arr[i] != arr[j]) {result=arr[i];};
		}
	}
	return result;
}

int find_unique_using_1loop(int arr[], int arr_size){

	int result;
	for(int i=0,j=0; i<arr_size; i++){
		if(arr[j] != arr[i]) {result=arr[j];}
		if(i == arr_size-1) i = j++;
	}
	return result;
}

int main(void) {

	int a[] = {4,2,5,2,5,7,4}; 		int a_size = sizeof(a)/sizeof(a[0]);
	int b[] = {4,2,4}; 				int b_size = sizeof(b)/sizeof(b[0]);

	printf("Output: %d", find_unique_using_1loop(a, a_size));
	printf("\nOutput: %d", find_unique(b, b_size));
	printf("\nOutput: %d", find_unique_using_1loop(a, a_size));
	printf("\nOutput: %d", find_unique(b, b_size));
	return 0;
}
