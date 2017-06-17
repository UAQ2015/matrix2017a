#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include "matrix.h"

using namespace std;

int main ()
{  
	int i=0;
	int n=365;

	Matrix a;

	a.Ones(3,3);
	a.Print();
	for(i=0; i<n; i++)
	{
		a=a.MultiplybyC(1.1);
	}
	a.Print();

	a.Ones(1,2);
	a.Print();
	for(i=0; i<n; i++)
	{
		a=a.Trans(a);
	}
	a.Print();

	
	cout<<"===================";
	a.Id(3);
	a.Print();
	for(i=0; i<n; i++)
	{
		a=a.MultiplybyC(i);
//		cout<<"Det: "<< a.Determinant(a);
	}
	a.Print();

	//Division de matrices
	Matrix A;
	Matrix B;
	Matrix C;
	cout<<"Division de A/B\n";
	cout<<"\nIntroduce la matriz numerador:\n";
	A.Read();
	cout<<"\nIntroduce la matriz denominador:\n";
	B.Read();
	cout<<"/nDivision A/B:\n";
	C=A.Division(B);	
	C.Print();

    return 0;

}
