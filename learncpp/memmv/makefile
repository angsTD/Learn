CC:= gcc
CFLAGS=-std=c99

all: memmv
memmv: mem_mov.o
	$(CC) $(CFLAGS) -o memmv mem_mov.o

mem_move.o: mem_mov.c
	$(CC) $(CFLAGS) -c mem_mov.c

.PHONY : clean
clean:
	-rm -f *.o memmv
