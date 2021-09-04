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
#define scanf_int(__va_args__) fflush (stdout); scanf("%d", __va_args__)

#define prt_ptr(p, name) printf("Address of pointer %s : %x\n", name, (unsigned int)p);\
						 printf("Content of pointer %s : %d", name, *p)

int main(void) {

	int arr_size;
	printf("Input the number of elements to store in the array (max 15) : 5 -> ");
	scanf_int(&arr_size);

	int arr[arr_size];
	int* p_arr = arr;

	printf("\nInput %d number of elements in the array :", arr_size);
	printf("\n------------------------------------------");
	for(int i=1; i<=arr_size; i++){
		printf("\n\nelement - %d: ", i);
		scanf_int(p_arr++);
		//prt_ptr((p_arr-1), "p_arr");	//Debugging message you can comment
	}


	printf("\n\nThe elements of array in reverse order are :");
	printf("\n---------------------------------------------\n");
	for(int i=arr_size; i != 0; i--) {
		//prt_ptr((p_arr-1), "p_arr");		//Debugging message you can comment
		printf("\nelement - %d: %d\n\n", i, *(--p_arr));
	}
	return 0;
}
