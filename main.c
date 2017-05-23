#include <stdlib.h>
#include <stdio.h>
#include "matrix.h"
main ()
{  	// Create new matrix
	//	int x=0;
	Matrix m;   //this creates a new instance
	Matrix b;
	Matrix c;
	 //Read matrix
//	m.Read();
	m.Ones(3,3);
	b.Ones(3, 3);
	
	//Print matrix 
	m.Print();
	b.Print();
	
	c=m.Add(b)
	c.Print();
    return 0;
}
