/*
 ============================================================================
 Name        : Quiz_2nd.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>



void fun(int n){

	if(n>0){

		fun(--n);
		printf("%d\t",n);
		fun(--n);
	}

}
static int i;
int sum(int a, int b);

int main() {

	i = 1;
	if(!i) printf("if");
	else{i=0; printf("else"); main();}
	return 0;
}

int sum(int a, int b){
	return a+b;
}
