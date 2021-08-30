/*
 ============================================================================
 Name        : MT_Q3.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

/*c function to print all prime numbers between two numbers?
test case : input:n1=1,n2=20 ->output:1 2 3 5 7 11 13 17 19*/
int IsPrime(int num){
	for(int i=2; i<=num/2; i++){
		if(num%i == 0) return 0;
	}
	return 1;
}


int main(void) {

	int start, end;
	printf("Enter two numbers(intervals) : ");
	fflush(stdin); fflush(stdout); scanf("%d %d", &start, &end);

	printf("Prime numbers between %d and %d are : ", start, end);
	for(int i=start; i<end; i++){ if(IsPrime(i)) printf("%d ", i); }

	return 0;
}
