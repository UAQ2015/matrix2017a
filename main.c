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
	Matrix cp;
	Matrix I;
	Matrix q;
    Matrix a;
	Matrix nueva;
	 //Read matrix
//	m.Read();
/*
	m.Ones(3,3);
	b.Ones(4,3);
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
	q=m.Trans(b);
	q.Print();

	// cp= p.Copy();
	cp=p; // Copia la matriz p, asigna la copia a cp, regresa cp
	cp.Print();
*/

	m.Ones(3,3);
//	b.Ones(3,3);
//	c= m+b;
//	c.Print();
    a=m.MultiplybyC(5);
    a.Print();
	

    nueva.Read();
    nueva.Print();
    det=nueva.Determinant(nueva);
    printf("su determinante es  %f",det);



    return 0;

}
