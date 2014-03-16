class Matrix{
public:
	//Declaring the Matrix constructor passing by pointer
	Matrix(int M, int N, double* pData); 

	//Declaring the Matrix constructor passing by value
	Matrix(int sizeR, int sizeC, double temp); 

	Matrix();//Default constructor

	Matrix(const Matrix& S); //Copy constructor

	//Declaring the get block function
	Matrix getBlock(int strt_Row, int end_row, int strt_Col, int end_col);

	//Creating a setValues function to set sepcifc values in the matrix
	void setValues(int i, int j, double Tdata){ data[i*N + j] = Tdata; };

	//Creating a getData function in order to specific values of the matrix to be returned
	double getData(int i, int j) const { return data[i*N + j]; } 

	//Outputs the desired size of the desired matrix onto the screen
	void outputData(int row, int column)
	{
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < column; j++)
			{
				std::cout << data[i*N + j];
			}
			std::cout << std::endl;
		}

	}	
	
	//~Matrix() { delete[] data; };

protected: //The variables being protected means that they are accessible but not changable to the child

	//All the variables used in the class
	int M;
	int N;
	double* data;
};