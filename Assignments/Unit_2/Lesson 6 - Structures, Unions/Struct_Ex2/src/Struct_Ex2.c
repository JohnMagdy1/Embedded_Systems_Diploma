/*
 ============================================================================
 Name        : Struct_Ex2.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : c program to add two distance in feet-inch system using struct
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct S_Distance{
	int feet;
	float inch;
};

struct S_Distance read_Distance(char d_title[20]){
	struct S_Distance input;

	printf("\nTaking the information of %s distance", d_title);

	printf("\nEnter feet : ");
	fflush(stdin); fflush(stdout); scanf("%d", &input.feet);

	printf("Enter inch : ");
	fflush(stdin); fflush(stdout); scanf("%f", &input.inch);

	return input;
};

void print_Distance(struct S_Distance input){

	printf("\nsum of distances = %d'-%.1f""", input.feet, input.inch);
}

struct S_Distance add_2_distances(struct S_Distance dis1, struct S_Distance dis2){
	struct S_Distance sum;
	sum.feet = dis1.feet + dis2.feet;
	sum.inch = dis1.inch + dis2.inch;

	if(dis1.inch + dis2.inch >= 10){
		sum.feet++;
		sum.inch -= 12;
	}

	return sum;
};

int main(void) {

	struct S_Distance dis1 = read_Distance("dis1");
	struct S_Distance dis2 = read_Distance("dis2");
	struct S_Distance sum = add_2_distances(dis1, dis2);
	printf("\nsum of distances = %d'-%.1f""", sum.feet, sum.inch);
	return 0;
}
