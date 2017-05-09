
GCC=g++

all: matrix.o
	${GCC} main.c matrix.o -o main

matrix.o: matrix.cpp matrix.h
	${GCC} matrix.cpp -c -o matrix.o

clean:
	rm -f matrix.o main
