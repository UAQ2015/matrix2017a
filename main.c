#include <stdlib.h>
#include <stdio.h>
#include "matrix.h"
main ()
{  	// Create new matrix
	//	int x=0;
	Matrix m;   //this creates a new instance

	 //Read matrix
	m.Read();

	//Print matrix 
	m.Print();

    return 0;
}
