/*
 ============================================================================
 Name        : LectureEx1.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void func(void);

int x;

int main(void) {

	printf("main -> x=%d\n", x);
	func(); printf("main -> x=%d\n", x);

	x = 8;
	func(); printf("main -> x=%d\n", x);

}
