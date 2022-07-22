/*
 ============================================================================
 Name        : Dump_memory.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct Data{
	char d1;
	int d2;
	char d3;
	short d4;

};

void print_meomry_range(char *base, int size){
	printf("\nDumping memory\n\n");
	for(int i=0; i<size; i++){printf("Address (0x%p) contains -> %x\n", (base+i), (unsigned char)*(base+i));}
}

int main(void) {

	struct Data d = {0x11, 0xABCDABCD, 0x33, 0xDCBA};
	struct Data* P_struct = &d;
	print_meomry_range(&d, sizeof(d));
	P_struct->d1 = 0x12;
	print_meomry_range(&d, sizeof(d));
	return 0;
}
