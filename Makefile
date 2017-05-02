
all: main.c matrix.o
	gcc main.c matrix.o -o main

matrix.o: matrix.cpp matrix.h
	gcc matrix.cpp -c -o matrix.o

clean:
	rm -f matrix.o main
