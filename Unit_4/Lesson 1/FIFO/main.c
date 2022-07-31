#include "./fifo.h"

void main()
{

    element_type i, temp;
    FIFO_Buf_t FIFO_UART;
    if (FIFO_init(&FIFO_UART, uart_buff, 5) == FIFO_no_error)
        printf("FIFO init -> Done \n");

    for (i = 0; i < 8; i++)
    {
        printf("FIFO Enqueue : %x -> ", i);

        switch (FIFO_enqueue(&FIFO_UART, i))
        {
        case (FIFO_no_error):
            printf("Operation Done \n");
            break;

        case (FIFO_full):
            printf("FIFO is Full \n");
            break;

        case (FIFO_Null):
            printf("FIFO is NULL \n");
            break;

        default:
            printf("Case default called");
            break;
        }
    }

    FIFO_Print_all(&FIFO_UART);

    for (i = 0; i < 2; i++)
    {
        printf("FIFO dequeue -> ");

        switch (FIFO_dequeue(&FIFO_UART, &temp))
        {
        case (FIFO_no_error):
            printf("Operation Done, popped item = %d \n", temp);
            break;

        case (FIFO_empty):
            printf("FIFO is empty \n");
            break;

        case (FIFO_Null):
            printf("FIFO is NULL \n");
            break;

        default:
            printf("Case default called");
        }
    }

    FIFO_Print_all(&FIFO_UART);
}