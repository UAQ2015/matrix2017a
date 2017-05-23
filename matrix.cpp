#include "matrix.h"
#include <iostream>

using namespace std;

Matrix::Matrix()
{
}
Matrix::Matrix(int _m, int _n)
{	m= _m;
	n= _n;
	CreateArray();	
}

Matrix Matrix::Add(Matrix b)
{ 	
  	Matrix c(b.m,b.n);
	for(int i=0; i< b.m ; i++)
		for(int j=0;j< b.n ; j++)
		{ c.mat[i][j]= b.mat[i][j] + mat[i][j];
		}	
	
	return c;	
}

void Matrix::Ones(int r, int c)
{	m=r;
	n=c;
	CreateArray();

   for(int i=0; i<r; i++)
	  for(int j=0;j< c; j++)
	   {	mat[i][j]=1;

	   }
}
void Matrix::Id(int r, int c)
{	m=r;
	n=c;
	CreateArray();
	for(int i=0; i<r;i++)
		for(int j=0;j< c;j++)
		{ if(i==j)
			mat[i][j]=1;
		  else
			mat[i][j]=0;
		}
}
 
void Matrix::Read()
{	cout<<"Por favor introduzca el numero de renglones\n";  
	cin>> m;

	cout<<"Por favor introduzca el numero de columnas\n";
	cin>> n;

	CreateArray();

	for(int i=0;i<m; i++)
		for(int j=0;j<n;j++)
		{  cout<<"Introduce el dato arr["<<i<<"]["<<j<<"]\n";
		   cin>>mat[i][j];
		}
}
void Matrix::Print()
{	cout<<"Imprimiendo matriz de "<< m <<" renglones y "<<n<<" columnas\n";	
	for(int i=0;i<m;i++)
	{   for(int j=0;j<n;j++)
		{	cout<<mat[i][j]<<" ";
		}	
		cout<<endl;
	}
}


void Matrix::CreateArray()
{	mat= new float *[m];
	for(int i=0;i<m;i++)
	{	mat[i]= new float[n];
	}	

}
void Matrix::DeleteArray ()
{	for(int i=0;i<m;i++)
	{	delete mat[i];
	}
	delete mat;
	mat = NULL;
}
