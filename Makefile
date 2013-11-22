
ARMGNU = /opt/gnuarm/bin/arm-none-eabi

AOPS = --warn --fatal-warnings -mcpu=arm1176jzf-s -march=armv6  -mfpu=vfp

COPS = -Wall -nostartfiles -ffreestanding

CFLAGS = -mcpu=arm1176jzf-s -mtune=arm1176jzf-s -mhard-float -mfpu=vfp -O0 -ggdb -g

INCDIR = /Users/yuri/git/mruby2/include/
ULIBDIR = /Users/yuri/git/mruby2/build/rs/lib

LIB = -L /opt/gnuarm/arm-none-eabi/lib/fpu/ -L/opt/gnuarm/lib/gcc/arm-none-eabi/4.8.1/fpu/

ULIBS = -lmruby

gcc : kernel.img demo.hex demo.bin demo.elf

all : gcc

clean :
	rm -f *.o
	rm -f *.bin
	rm -f *.hex
	rm -f *.elf
	rm -f *.list
	rm -f *.img
	rm -f *.bc
	rm -f *.map

vectors.o : vectors.s
	$(ARMGNU)-as $(AOPS) vectors.s -o vectors.o

demo.o : demo.c
	$(ARMGNU)-gcc $(COPS) $(CFLAGS) -I $(INCDIR) -c demo.c -o demo.o

syscalls.o : syscalls.c
	$(ARMGNU)-gcc $(COPS) $(CFLAGS) -c syscalls.c -o syscalls.o
	
demo.elf : memmap vectors.o demo.o syscalls.o
	$(ARMGNU)-ld vectors.o demo.o syscalls.o -Map=demo.map -T memmap -o demo.elf -L $(ULIBDIR) $(ULIBS) $(LIB) -lc -lm -lgcc 
#	$(ARMGNU)-gcc $(COPS) $(CFLAGS) vectors.o demo.o syscalls.o -T memmap -o demo.elf -L $(ULIBDIR) $(ULIBS) $(LIB) -lc -lm -lgcc 
	$(ARMGNU)-objdump -D demo.elf > demo.list

demo.bin : demo.elf
	$(ARMGNU)-objcopy demo.elf -O binary demo.bin

demo.hex : demo.elf
	$(ARMGNU)-objcopy demo.elf -O ihex demo.hex

kernel.img : demo.bin
	cp demo.bin kernel.img

