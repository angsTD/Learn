CC:= gcc
CFLAGS=-std=c99

all: rdreg64
rdreg64: read_reg64.o
	$(CC) $(CFLAGS) -o rdreg64 read_reg64.o

read_reg64.o: read_reg64.c
	$(CC) $(CFLAGS) -c read_reg64.c

.PHONY : clean
clean:
	-rm *.o rdreg64
