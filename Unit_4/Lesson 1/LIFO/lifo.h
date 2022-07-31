/* 
    Lifo.h 
    created at 29-7-2022
    author: John Magdy
*/

#ifndef LIFO_H_
#define LIFO_H_

typedef struct LIFO_Buf{
    unsigned int length;        
    unsigned int count; 
    unsigned int *head;
    unsigned int *base;
}LIFO_Buf_t;

typedef enum{
    LIFO_no_error,
    LIFO_full,
    LIFO_empty,
    LIFO_Null
}LIFO_status;

LIFO_status LIFO_init(LIFO_Buf_t* lifo_buf, unsigned int *buf, unsigned int length);
LIFO_status LIFO_Add_item(LIFO_Buf_t *lifo_buf, unsigned int item);
LIFO_status LIFO_Pop_item(LIFO_Buf_t *lifo_buf, unsigned int *item);

#endif