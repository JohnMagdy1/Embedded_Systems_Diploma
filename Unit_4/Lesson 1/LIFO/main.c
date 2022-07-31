#include <stdio.h>
#include "stdlib.h"     /* to allow dynamic allocation*/
#include "lifo.h"
#include "lifo.c"

unsigned int st_buf[5];


void main(){
    
    int i, temp=0;
    LIFO_Buf_t uart_lifo, I2C_lifo;
    LIFO_init(&uart_lifo, st_buf, 5);      /* static allocation*/
    
    unsigned int* dyn_buf = malloc(5 * sizeof(unsigned int)); 
    LIFO_init(&I2C_lifo, dyn_buf, 5);     /* dynamic allocation*/
    
    for(i=0; i<8; i++){
        printf("Uart_LIFO add : %d -> ", i);
        if(LIFO_Add_item(&uart_lifo, i) == LIFO_no_error)
            printf("Operation Done \n");
        else if(LIFO_Add_item(&uart_lifo, i) == LIFO_full)
            printf("LIFO is Full \n");
        else if(LIFO_Add_item(&uart_lifo, i) == LIFO_Null)
            printf("LIFO is NULL \n");
    }

    for(i=0; i<8; i++){
        printf("Uart_LIFO pop : -> ");
        if(LIFO_Pop_item(&uart_lifo, &temp) == LIFO_no_error)
            printf("Operation Done, popped item = %d \n", temp);
        else if(LIFO_Pop_item(&uart_lifo, &temp) == LIFO_empty)
            printf("LIFO is empty \n");
        else if(LIFO_Pop_item(&uart_lifo, &temp) == LIFO_Null)
            printf("LIFO is NULL \n");
    }

    free(dyn_buf);

}