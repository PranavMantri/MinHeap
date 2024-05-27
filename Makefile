CC=g++
CFLAGS=-g -Wall


PJ2:PJ2.o heap.o
	$(CC) $(CFLAGS) PJ2.o heap.o -o PJ2
PJ2.o:PJ2.cpp data_structures.h heap.h
heap.o:heap.h heap.cpp data_structures.h
.PHONY: clean
clean:
	rm -f *.o PJ2
.PHONY: all
all: clean PJ2

