#include <stdlib.h>
#include <stdio.h>
#include "matrix.h"
main ()
{  	// Create new matrix
	//	int x=0;
	Matrix m;   //this creates a new instance
	Matrix b;
	Matrix c;
	Matrix I;
	 //Read matrix
//	m.Read();
	m.Ones(3,3);
	b.Ones(3,3);
	I.Id(3,3);
	//Print matrix 
	m.Print();
	b.Print();
	I.Print();
	//operaciones
	c=m.Add(b);
	c.Print();
    return 0;
}
