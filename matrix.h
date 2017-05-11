#ifndef __MATRIX_H
#define __MATRIX_H

class Matrix
{
public:
	void Read();
	void Print();
private:
	int m; // Row number
	int n; // Col number
	float **mat;
	void CreateArray();
	void DeleteArray();
};

#endif
