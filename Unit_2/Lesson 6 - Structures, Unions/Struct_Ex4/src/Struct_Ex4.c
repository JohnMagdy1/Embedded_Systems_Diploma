/*
 ============================================================================
 Name        : Struct_Ex4.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct S_Student{
	char name[20];
	int roll;
	int marks;
};

struct S_Student read_Student(int num){
	struct S_Student input;

	printf("\nTaking the information of student %d\n", num+1);

	printf("Enter the student name : ");
	fflush(stdin); fflush(stdout); gets(input.name);

	printf("Enter the student roll : ");
	fflush(stdin); fflush(stdout); scanf("%d", &input.roll);

	printf("Enter the student marks : ");
	fflush(stdin); fflush(stdout); scanf("%d", &input.marks);
	return input;
};

void print_Student(struct S_Student input, int num){
	printf("\n\nDisplaying the information of student %d", num+1);

	printf("\nStudent name -> %s", input.name);
	printf("\nStudent roll -> %d", input.roll);
	printf("\nStudent marks -> %d", input.marks);
}

int main(void) {

	int size = 10;

	struct S_Student students[size];
	for(int i=0; i<size; i++){ students[i] = read_Student(i); }
	for(int i=0; i<size; i++){ print_Student(students[i], i); }

	return 0;
}
