#include <stdlib.h>
#include <stdio.h>
#include "matrix.h"
main ()
{  	// Create new matrix
	//	int x=0;
	Matrix m;   //this creates a new instance
	Matrix b;
	Matrix c;
	Matrix p;
	Matrix I;
    Matrix a;
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
    a=m.MultilybyC(b);
	p=m.Prod(I);
	p.Print();
    return 0;
}
