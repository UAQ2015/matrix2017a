#include <stdlib.h>
#include <stdio.h>
#include "matrix.h"
main ()
{  	// Create new matrix

	Matrix m;   //this creates a new instance
	Matrix b;
	Matrix c;
	Matrix p;
	Matrix cp;
	Matrix I;
    Matrix a;
	 //Read matrix
//	m.Read();
/*
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
    a=m.MultilybyC();
    a.Print();
	p=m.Prod(I);
	p.Print();

	// cp= p.Copy();
	cp=p; // Copia la matriz p, asigna la copia a cp, regresa cp
	cp.Print();
*/

	m.Ones(3,3);
	b.Ones(3,3);
	c= m+b;
	c.Print();
	


    return 0;

}
