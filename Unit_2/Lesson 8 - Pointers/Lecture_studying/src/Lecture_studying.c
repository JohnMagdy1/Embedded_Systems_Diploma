/*
 ============================================================================
 Name        : Lecture_studying.c
 Author      : John Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : applying lecture
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define prt_smth(x, y, p) printf("x -> %x\t\t y -> %x\t\t *p-> %x\t", x, y, *p);\
				   printf("\n&x = %x\t &y = %x\t p = %x\n\n",(unsigned int)&x, (unsigned int)&y ,(unsigned int)p);

#define prt(z, pz, pzz) 	printf("&num -> %x\t &p_num -> %x\t &pp_num -> %x", (unsigned int)&z,(unsigned int)&pz,(unsigned int)&ppz);\
							printf("\np_num -> %x \t pp_num -> %x \t *pp_num -> %x", (unsigned int)pz,(unsigned int)ppz, (unsigned int)*ppz);\
							printf("\nnum -> %x\t         *p_num -> %x\t **pp_num -> %x\n\n", z, *pz,**ppz);

int main(void) {

	/*int x = 1;
	int y = 5;
	int* p = &x;
	prt_smth(x, y, p);
	*p = 2; prt_smth(x, y, p);
	x = 3;  prt_smth(x, y, p);
	p = &y; prt_smth(x, y, p);
	*p = 3; prt_smth(x, y, p);*/

	int z = 3;
	int y = 5;
	int* pz = &z;
	int* py = &y;
	int** ppz = &pz;
	prt(z, pz, pzz); prt(y, py, pzz);

	ppz = &py; // same as *ppz = &py; // same as *ppz = py;

	prt(z, pz, pzz); prt(y, py, pzz);



	return 0;
}
