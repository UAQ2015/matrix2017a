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
//////////////
Matrix Matrix::Prod(Matrix b)
{	Matrix c(m,b.n);
		
	if(n != b.m)
	{	cout<<"La matriz no puede multiplicarse por la matriz:\n";
		return b;
	}
	
	for(int i=0; i< b.m ; i++)
	{	for(int j=0;j< b.n ; j++)
		{	c.mat[i][j]=0;
			for(int k=0;k< b.m ;k++)
			{
			 c.mat[i][j]+= mat[i][k]* b.mat[k][j];
			}
		}
	}	
	return c;
}

Matrix Matrix::Add(Matrix b)
{ 	Matrix c(b.m,b.n);
	if( m != b.m || n != b.n)
	{	cout<<"No puede sumarse la matriz:\n";
		return b;
	}	
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
void Matrix::Id(int r)
{	m=r;
	n=r;
	CreateArray();
	for(int i=0; i<r;i++)
		for(int j=0;j< r;j++)
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
