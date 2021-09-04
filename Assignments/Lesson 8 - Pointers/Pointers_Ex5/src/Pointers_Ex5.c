/*
 ============================================================================
 Name        : Pointers_Ex5.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define get_str(__va_args__) fflush (stdout); fflush (stdin); gets(__va_args__)
#define scanf_int(__va_args__) fflush (stdout); fflush (stdin); scanf("%d", __va_args__)

struct Employee{
	char name[20];
	int id;
	int salary;
};

struct Employee Read_employee(){
	struct Employee e;
	printf("Enter Employee's name: ");
	get_str(e.name);
	printf("Enter Employee's ID: ");
	scanf_int(&e.id);
	printf("Enter Employee's Salary: ");
	scanf_int(&e.salary);
	return e;
};

void Print_employee(struct Employee e){
	printf("\nEmployee's name: %s", e.name);
	printf("\nEmployee's ID: %d", e.id);
	printf("\nEmployee's Salary: %d", e.salary);
};

void Print_employee_using_ptr(struct Employee* p_e){
	printf("\nEmployee's name: %s", p_e->name);
	printf("\nEmployee's ID: %d", p_e->id);
	printf("\nEmployee's Salary: %d\n", p_e->salary);
};

int main(void) {
	struct Employee e1;
	struct Employee* p_e1 = &e1;
	e1 = Read_employee();
	Print_employee(e1);
	Print_employee_using_ptr(p_e1);
	return 0;
}
