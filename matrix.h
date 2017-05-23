#ifndef __MATRIX_H
#define __MATRIX_H

class Matrix
{
public:
	//Constructor
	Matrix(int,int);
	void Read();
	void Print();
	Matrix Add(Matrix b);
	void Ones(int r, int c);
private:
	int m; // Row number
	int n; // Col number
	float **mat;
	void CreateArray();
	void DeleteArray();
};

#endif
