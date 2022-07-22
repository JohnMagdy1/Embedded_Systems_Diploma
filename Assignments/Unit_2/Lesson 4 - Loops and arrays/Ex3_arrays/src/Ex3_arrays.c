/*
 ============================================================================
 Name        : Ex3_arrays.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void Enter_Mat(int rows, int cols, float matrix[rows][cols], char letter){

	printf("Enter all elements of matrix %c\n", letter);

	for(int i=0; i<rows; i++){
		for(int j=0; j<cols; j++){
			printf("Enter element %c%d%d : " ,letter,i+1,j+1);
			fflush(stdin); fflush(stdout); scanf("%f", &matrix[i][j]);
		}
	}
}

void print_Mat(int rows, int cols, float matrix[rows][cols]){

	for(int i=0; i<rows; i++){
		for(int j=0; j<cols; j++){
			printf("%f\t", matrix[i][j]);
		}
		printf("\n");
	}
}






int main(void) {

	int rows, cols;
	printf("Enter rows and columns of the matrix: ");
	fflush(stdin); fflush(stdout); scanf("%d %d", &rows, &cols);

	float mat[rows][cols], tans_mat[cols][rows];
	Enter_Mat(rows, cols, mat, 'A'); print_Mat(rows, cols, mat);


	for(int i=0; i<rows; i++){
		for(int j=0; j<cols; j++){
			tans_mat[j][i] = mat[i][j];
		}
	}

	printf("\n"); print_Mat(cols, rows, tans_mat);

	return 0;
}
