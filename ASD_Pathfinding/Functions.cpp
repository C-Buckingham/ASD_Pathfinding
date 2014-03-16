#include <iostream> // cout, cerr
#include "Matrix.h"

//This constructor creates a new martrix with the values and not a pointer
Matrix::Matrix(int sizeR, int sizeC, double temp)
{
	M = sizeR;
	N = sizeC;
	data = new double[M*N];

	for (int i = 0; i < M; i++){
		for (int j = 0; j < N; j++){
			data[i*N + j] = temp;
		}
	}
};

//This constructor creates a new martrix with the pointer to the values and not the values themselfs
Matrix::Matrix(int sizeR, int sizeC, double* pData)
{
	M = sizeR;
	N = sizeC;
	data = new double[M*N];

	for (int i = 0; i < M; i++){
		for (int j = 0; j < N; j++){
			data[i*N + j] = pData[i*N + j];
		}
	}
};

//This function will find and pick out a specified section of the requested matrix
Matrix Matrix::getBlock(int strt_Row, int end_row, int strt_Col, int end_col)
{
	//end_row - strt_Row and end_col - strt_Col is needed to make sure that the matrix will contain the correct number values
	Matrix S(end_row - strt_Row + 1, end_col - strt_Col + 1, 0.0);

	//<= is needed otherwise the code will not get all the way to the end and will not return all the requested values
	for (int i = strt_Row; i <= end_row; i++){
		for (int j = strt_Col; j <= end_col; j++){
			S.setValues(i - strt_Row, j - strt_Col, data[i*N + j]);
		}
	}

	return S;
};

Matrix::Matrix(const Matrix& S) //Deep copy is being used to make sure the memory being allocated is empty
{
	M = S.M;
	N = S.N;
	data = new double[M*N];

	for (int i = 0; i < M*N; i++)
		data[i] = S.data[i];
};