/*linker script CortexM3 ~ John Magdy*/

MEMORY{
    flash(RX) : ORIGIN = 0X00000000, LENGTH = 512M
    sram(RWX) : ORIGIN = 0X20000000, LENGTH = 512M
}
SECTIONS{

    .text : {
        *(.vectors*)
        *(.text*)
        *(.rodata)
        _E_text = .;
        . = ALIGN(4);
    }> flash

    .data : {
        _S_data = .;
        *(.data)
        _E_data = .;
        . = ALIGN(4);
    }> sram AT> flash              

    .bss : {
        _S_bss = .;
        *(.bss*) *(COMMON)
        _E_bss = .;
        . = ALIGN(4);
    }> sram

    _stack_top = . + 0x1000;        /*we won't use this part in this code */ 
}