/* 
    FIFO.h 
    created at 29-7-2022
    author: John Magdy
*/

#ifndef FIFO_H_
#define FIFO_H_

#include "stdio.h"
#include "stdlib.h" 
#include "stdint.h"

#define element_type uint8_t        /* to select the element type */
#define width 5

//create buffer
element_type uart_buff[width];

typedef struct{
    unsigned int length;        
    unsigned int count; 
    element_type *head;
    element_type *base;
    element_type *tail;
}FIFO_Buf_t;

typedef enum{
    FIFO_no_error,
    FIFO_full,
    FIFO_empty,
    FIFO_Null
}FIFO_status;

FIFO_status FIFO_init     (FIFO_Buf_t* FIFO_buf, element_type *buf, unsigned int length);
FIFO_status FIFO_enqueue  (FIFO_Buf_t *FIFO_buf, element_type  item);
FIFO_status FIFO_dequeue  (FIFO_Buf_t *FIFO_buf, element_type  *item);
FIFO_status FIFO_IS_FULL  (FIFO_Buf_t *FIFO_buf);
FIFO_status FIFO_Print_all(FIFO_Buf_t *FIFO_buf);

#endif