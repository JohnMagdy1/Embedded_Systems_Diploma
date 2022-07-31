/*
 ============================================================================
 Name        : Struct_Ex5.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : using marcos to find circle area
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415
#define Circle_Area(r) (PI*r*r)

int main(void) {

	float radius, area;
	printf("Enter the radius : ");
	fflush(stdin); fflush(stdout); scanf("%f", &radius);
	area = Circle_Area(radius);
	printf("Area is %f", area);

	return 0;
}
