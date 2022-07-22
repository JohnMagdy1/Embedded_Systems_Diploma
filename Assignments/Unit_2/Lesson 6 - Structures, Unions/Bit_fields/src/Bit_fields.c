/*
 ============================================================================
 Name        : Bit_fields.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct status_type {
	unsigned char delta_cts:1;
	unsigned char delta_dsr:1;
	unsigned char tr_edge:1;
	unsigned char delta_rec:1;
	unsigned char cts:1;
	unsigned char dsr:1;
	unsigned char ring:1;
	unsigned char rec_line:1;
};

int main(void) {

	struct status_type status = {0,1,1,0,1,1,1,1};

	printf("%d", status.delta_cts);
	printf("%d", status.delta_dsr);
	printf("%d", status.tr_edge);
	printf("%d", status.delta_rec);
	printf("%d", status.cts);
	printf("%d", status.dsr);
	printf("%d", status.ring);
	printf("%d", status.rec_line);

	return 0;
}
