/*
 ============================================================================
 Name        : Ex1_Functions.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int IsPrime(int num){

	int flag=0;
	for(int i=2; i<=num/2; ++i){
		if(num%i == 0) {flag=1; break;}
	}
	return !flag;
}


int main(void) {

	int start, end;
	printf("Enter two numbers(intervals) : ");
	fflush(stdin); fflush(stdout); scanf("%d %d", &start, &end);

	printf("Prime numbers between %d and %d are : ", start, end);
	for(int i=start; i<end; i++){
		if(!IsPrime(i)) continue;
		printf("%d ", i);
	}
	return 0;
}
