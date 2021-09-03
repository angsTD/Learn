CC:= gcc
CFLAGS=-std=c99

all: bitrev
bitrev: bitrev.o
	$(CC) $(CFLAGS) -o bitrev bitrev.o

bitrev.o: bitrev.c
	$(CC) $(CFLAGS) -c bitrev.c

.PHONY : clean
clean:
	-rm -f *.o bitrev
