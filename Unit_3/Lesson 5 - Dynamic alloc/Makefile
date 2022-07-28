#copyright : John

#name of compiler
CC=arm-none-eabi-

#repeated flags in the build
CFLAGS= -mcpu=cortex-m3 -mthumb -gdwarf-2
#added this "-mthumb" to solve this error "main.c:1:0: error: target CPU does not support ARM mode"
#added this "-gdwarf-2" to be understood by proteus (gdb)

LIBS=
INCS= -I .

SRC = $(wildcard *.c) 
OBJ = $(SRC:.c=.o) 
As = $(wildcard *.s)
AsOBJ = $(As:.s=.o) 
Project_name=Learn_in_depth_cortex_m3_j

all: $(Project_name).bin
	@echo "Build is done"

%.o: %.c
	$(CC)gcc.exe -c $(INCS) $(CFLAGS) $< -o $@ 

%.o: %.s
	$(CC)as.exe -c $(INCS) $(CFLAGS) $< -o $@ 

$(Project_name).elf: $(OBJ) $(AsOBJ)
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(OBJ) $(AsOBJ) -o $@ -Map=mapfile.map

$(Project_name).bin: $(Project_name).elf
	$(CC)objcopy.exe -O binary $< $@

clean_all:
	rm *.o *.elf *.bin

clean:
	rm *.elf *.bin
