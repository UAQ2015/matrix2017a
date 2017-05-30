#include "matrix.h"
#include <iostream>

using namespace std;

Matrix Matrix::Inverse(Matrix b)
{   float p;
    float c;
    int k=0;
    int h;
    Matrix I;
    I.Id(n);
    //change

    for(int r=0;r<n;r++)
    {   k=r;

        while(k<n-1)
        {   if(mat[k][r]!=0)
                break;
            k++;
        }
        if(k!=r)
        {    b=b.ChRow(k,r);
			 I=I.ChRow(k,r);

            for(int l=0; l<n;l++)
            {   for(int p=0;p<n;p++)
                {   mat[l][p]=b.mat[l][p];
                }
            }

        }
        if(mat[n-1][n-1] == 0)
        {   b=b.ChRow(n-1,0);
            I=I.ChRow(n-1,0);

            for(int l=0; l<n;l++)
            {   for(int p=0;p<n;p++)
                {   mat[l][p]=b.mat[l][p];
                }
            }
            I.Print();
            b.Print();
        }
    }

    //ones on diagonal
    for(int i=0;i<n;i++)
    {   c=mat[i][i];
        for(int j=0;j<n;j++)
        {   mat[i][j]=mat[i][j]/c;
            I.mat[i][j]=I.mat[i][j]/c;
        }
    }
    
    //pivot lower triangle
    for(int k=0;k<n-1;k++)
    {
        for(int i=k;i<n-1;i++)
        {   p=mat[i+1][k];
            for(int j=0;j<n;j++)
            {
                mat[i+1][j]=mat[i+1][j]-(p*mat[k][j]);
                I.mat[i+1][j]=I.mat[i+1][j]-(p*I.mat[k][j]);
           }
        }
    }

    //ones on diagonal
    for(int i=0;i<n;i++)
    {   c=mat[i][i];
        for(int j=0;j<n;j++)
        {   mat[i][j]=mat[i][j]/c;
            I.mat[i][j]=I.mat[i][j]/c;
        }
    }
    //pivot higher trianglie
    for(int i=0;i<n-1;i++)
    {
        for(int k=i;k<n-1;k++)
        {
            p=mat[i][k+1];
            for(int j=0;j<n;j++)
            {
                mat[i][j]=mat[i][j]-(p*mat[k+1][j]);
                I.mat[i][j]=I.mat[i][j]-(p*I.mat[k+1][j]);
            }
        }
//  I.Print();      
    }
    return I;
}


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
			{	 c.mat[i][j]+= mat[i][k]* b.mat[k][j];
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
