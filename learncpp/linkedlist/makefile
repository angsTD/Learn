CC:= gcc
CFLAGS=-std=c99

all: llist
rdreg64: llist.o
	$(CC) $(CFLAGS) -o llist llist.o

llist.o: llist.c
	$(CC) $(CFLAGS) -c llist.c

.PHONY : clean
clean:
	-rm -f *.o llist
