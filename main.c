#include <stdlib.h>
#include <stdio.h>
#include "matrix.h"
main ()
{  	// Create new matrix
	//	int x=0;
	float det=0;
	Matrix m;   //this creates a new instance
	Matrix b;
	Matrix c;
	Matrix p;
	Matrix I;
	Matrix nueva;
	 //Read matrix
//	m.Read();
	m.Ones(3,3);
	b.Ones(2,3);
	I.Id(3);
	//Print matrix 
	m.Print();
	b.Print();
	I.Print();
	//operaciones
	c=m.Add(b);
	c.Print();
	p=m.Prod(I);
	p.Print();

    nueva.Read();
    nueva.Print();
    det=nueva.Determinant(nueva);
    printf("su determinante es  %f",det);



    return 0;
}
