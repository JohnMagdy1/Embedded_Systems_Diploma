#include "fifo.h"

FIFO_status FIFO_init(FIFO_Buf_t *FIFO_buf, element_type *buf, unsigned int length)
{

    if (buf == NULL)
        return FIFO_Null;

    FIFO_buf->base = buf;
    FIFO_buf->head = buf;
    FIFO_buf->tail = buf;
    FIFO_buf->length = length;
    FIFO_buf->count = 0;

    return FIFO_no_error;
}

FIFO_status FIFO_IS_FULL(FIFO_Buf_t *FIFO_buf)
{
    if (!FIFO_buf->base || !FIFO_buf->head || !FIFO_buf->tail)
        return FIFO_Null;
    if (FIFO_buf->count == FIFO_buf->length)
        return FIFO_full;
    return FIFO_no_error;
}

FIFO_status FIFO_enqueue(FIFO_Buf_t *FIFO_buf, element_type item)
{
    if (!FIFO_buf->base || !FIFO_buf->head || !FIFO_buf->tail)
        return FIFO_Null;
    else if (FIFO_IS_FULL(FIFO_buf) == FIFO_full)
        return FIFO_full;

    *(FIFO_buf->head) = item;
    FIFO_buf->count++;

    FIFO_buf->head = (FIFO_buf->head == FIFO_buf->head + (FIFO_buf->length * sizeof(element_type))) ? FIFO_buf->base : ++FIFO_buf->head;

    return FIFO_no_error;
}

FIFO_status FIFO_dequeue(FIFO_Buf_t *FIFO_buf, element_type *item)
{
    if (!FIFO_buf->base || !FIFO_buf->head || !FIFO_buf->tail)
        return FIFO_Null;
    else if (FIFO_buf->count == 0)
        return FIFO_empty;

    *item = *FIFO_buf->tail;
    FIFO_buf->count--;

    FIFO_buf->tail = (FIFO_buf->tail == FIFO_buf->tail + (FIFO_buf->length * sizeof(element_type))) ? FIFO_buf->base : ++FIFO_buf->tail;

    return FIFO_no_error;
}

FIFO_status FIFO_Print_all(FIFO_Buf_t *FIFO_buf)
{
    int i;
    element_type *temp;

    if (FIFO_buf->count == 0)
    {
        printf("FIFO Is empty");
        return FIFO_empty;
    }
    else
    {
        temp = FIFO_buf->tail;
        printf("\n=========== dumping all elements ============= \n");
        for (i = 0; i < FIFO_buf->count; i++)
        {
            printf("element %X -> %d \n", i, *temp);
            temp++;
        }
    }
}
