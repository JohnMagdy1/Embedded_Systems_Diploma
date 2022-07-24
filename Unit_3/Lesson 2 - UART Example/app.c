#include "uart.h"

//to check content " arm-none-eabi-objdump.exe -h app.o"
unsigned char string_buffer[100] = "Learn-in-depth:<John Magdy William> ~ 23/7/2022";
unsigned char const ro_data[50] = "read only data /'rodata/' ";  
unsigned char unint_data[50];

void main(void){
    Uart_Send_String(string_buffer);
}