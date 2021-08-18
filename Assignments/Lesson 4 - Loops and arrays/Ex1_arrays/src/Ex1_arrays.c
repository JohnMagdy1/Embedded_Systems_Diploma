/*
 ============================================================================
 Name        : Ex1_arrays.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void print_Mat_2x2(float matrix[2][2]){
	for(int i=0; i<2; i++){

		for(int j=0; j<2; j++){
			printf("\t%f", matrix[i][j]);
		}
		printf("\n");
	}
}

void Enter_Mat_2x2(float matrix[2][2], char letter){

	printf("Enter all elements of matrix %c\n", letter);

	for(int i=0; i<2; i++){

		for(int j=0; j<2; j++){
			printf("Enter element %c%d%d : " ,letter,i+1,j+1);
			fflush(stdin); fflush(stdout); scanf("%f", &matrix[i][j]);
		}
	}
}

void add_Mat_2x2(float matA[2][2], float matB[2][2], float sum[2][2]){

	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			sum[i][j] = matA[i][j] + matB[i][j];
		}
	}
}

int main(void) {

	float matA[2][2], matB[2][2], matsum[2][2];

	Enter_Mat_2x2(matA, 'A');
	Enter_Mat_2x2(matB, 'B');

	add_Mat_2x2(matA, matB, matsum);
	print_Mat_2x2(matsum);

	return 0;
}
