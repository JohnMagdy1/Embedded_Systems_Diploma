/*
 ============================================================================
 Name        : Midterm_Studying.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int factorial(int num){

    if(num != 0){
        (num > 1)? printf("%d * ", num) : printf("1 = ");
        return num * factorial(num-1);
    }
    else return 1;
}

int fact(int x){
	if (x != 0) (x > 1)? printf("%d * ", x) : printf("1 = ");
    return (x == 0)? 1: (x * fact(x-1));
}

int sum(int x){
	if (x != 0) (x > 1)? printf("%d + ", x) : printf("1 = ");
    return (x == 0)? 0: (x + sum(x-1));
}

int calcMin(int values[], int n){

	int min = values[0];
	for(int i=0; i<n; i++){ if(min > values[i]) min = values[i];}
	return min;
}

void abc(int a){++a; printf("%d", a);}
int myfun(int arr[] ){return sizeof(arr)/sizeof(arr[0]);}
int main()
{

	//for(i=20, i=10; i<=20; i++){printf("%d \t", i);}
	//20>0? printf("if"):printf("else");


	int arr[] = {1,2,3,4,5,6,7};
	//printf("%d", sizeof(arr)/sizeof(arr[0]));
	printf("%d %d %d", sizeof(3.14), sizeof(3.14f), sizeof("3.14"));





	/*
    int f = 1, num = 6;

    // getting factorial by for loop
    for(int i = 1; i<=num; i++) { f *= i; }
    printf("%d! = %d\n", num, f);

    // getting factorial using pre-defined functions which use recursion
    printf("%d\n", factorial(num));
    printf("%d\n", fact(num));
    printf("%d\n", sum(num));

	// getting min values
    int values[] = {4,8,3,1,10,-5};
    printf("%d\n", calcMin(values, sizeof(values)/sizeof(values[0])));

	//printing triangle of numbers Lab
	num=10;

	for(int i=0; i<num; i++){
		for(int j=0; j<num-i; j++){
			printf("%d ", j+i);
		}
		printf("\n");
	}


*/

    return 0;
}

