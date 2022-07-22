/*
 ============================================================================
 Name        : Struct_Ex1.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : C program to store info (name, roll, marks) of a student using struc
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

struct S_Student read_Student(){
	struct S_Student input;

	printf("Taking the information of student\n");

	printf("Enter the student name : ");
	fflush(stdin); fflush(stdout); gets(input.name);

	printf("Enter the student roll : ");
	fflush(stdin); fflush(stdout); scanf("%d", &input.roll);

	printf("Enter the student marks : ");
	fflush(stdin); fflush(stdout); scanf("%d", &input.marks);
	return input;
};

void print_Student(struct S_Student input){
	printf("\nDisplaying the information of student");

	printf("\nStudent name -> %s", input.name);
	printf("\nStudent roll -> %d", input.roll);
	printf("\nStudent marks -> %d", input.marks);
}

int main(void) {

	struct S_Student student1 = read_Student();
	print_Student(student1);

	return 0;
}
