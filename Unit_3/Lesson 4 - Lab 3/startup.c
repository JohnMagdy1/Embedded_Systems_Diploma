//startup.c ~ John Magdy

#include "stdint.h"
#define Stack_Start_SP 0x20001000

void Reset_Handler();

void Default_Handler(){
    Reset_Handler();
}

void NMI_Handler() __attribute__((weak, alias("Default_Handler")));;
void H_fault_Handler()__attribute__((weak, alias("Default_Handler")));; 

extern unsigned int _stack_top;     /*we don't want to use this part*/
static unsigned long Stack_top[256];
// booking 1024 byte in the .bss section through 265 int in an array

void (* const g_p_fn_vectors[])__attribute__((section(".vectors"))) = {

    (void (*)()) ((unsigned long)&Stack_top + sizeof(Stack_top)),
    &Reset_Handler, 
    &NMI_Handler , 
    &H_fault_Handler

};

/*
uint32_t vectors[] __attribute__((section(".vectors"))) = {
    (uint32_t) ((unsigned long)&Stack_top + sizeof(Stack_top)),
    (uint32_t) &Reset_Handler, 
    (uint32_t) &NMI_Handler , 
    (uint32_t) &H_fault_Handler

};*/

extern unsigned int _E_text, _E_data, _E_bss, _S_data, _S_bss;
extern int main();

void Reset_Handler() { 
    /*copy data section from flash to ram*/
    unsigned int DATA_size = (unsigned char *)&_E_data - (unsigned char *)&_S_data;
    unsigned char* P_src = (unsigned char *)&_E_text;
    unsigned char* P_dst = (unsigned char *)&_S_data;
    int i = 0;
    for (; i < DATA_size; i++)
    {
        *((unsigned char *)P_dst++) = *((unsigned char *)P_src++);
    }
    // init .bss section in ram = 0
    unsigned int bss_size = (unsigned char *)&_E_bss - (unsigned char *)&_S_bss;
    P_dst = (unsigned char *) &_S_bss;
    for (i = 0; i < bss_size; i++)
    {
        *((unsigned char *)P_dst++) = (unsigned char)0;
    }

    main(); 
};