
GCC=g++

all: main test

test: matrix.o test.c
	${GCC} test.c matrix.o -o test

main: matrix.o 
	${GCC} main.c matrix.o -o main

matrix.o: matrix.cpp matrix.h
	${GCC} matrix.cpp -c -o matrix.o

clean:
	rm -f matrix.o main test
