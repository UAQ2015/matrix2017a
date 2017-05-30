#ifndef __MATRIX_H
#define __MATRIX_H

class Matrix
{
public:
	//Constructor
	Matrix();
	Matrix(int _m, int _n);
	void Read();
	void Print();
	Matrix Add(Matrix b);
	Matrix Det(Matrix b);
	Matrix Prod(Matrix b);
	void Ones(int r, int c);
	void Id(int r);
/////nvo yo
    Matrix ChRow(int r1, int r2);
    float Determinant(Matrix b);
/////

private:
	int m; // Row number
	int n; // Col number
	float **mat;
	void CreateArray();
	void DeleteArray();
};

#endif
