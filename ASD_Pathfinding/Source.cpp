#include <sstream> // stringstream
#include <iostream> // cout, cerr
#include <fstream> // ifstream
#include <istream>
#include "DoublyLinkedList.h"
#include "Matrix.h"

using namespace std;

// Reads .txt file representing an image of R rows and C Columns stored in filename 
// and converts it to a 1D array of doubles of size R*C
// Memory allocation is performed inside readTXT
double* readTXT(char *fileName, int sizeR, int sizeC);

int main()
{
	int M = 30; int N = 20;

	double* input_data = 0;

	cout << endl;
	cout << "Data from text file -------------------------------------------" << endl;

	// .pgm image is stored in inputFileName, change the path in your program appropriately
	char* inputFileName = "C:\\Users\\Chris\\Desktop\\layout.txt";
	input_data = readTXT(inputFileName, M, N);

	Matrix A(M, N, input_data);

	A.outputData(M, N);

	system("PAUSE");

	delete[] input_data;

	return 0;
}

// Read .txt file with image of size RxC, and convert to an array of doubles
double* readTXT(char *fileName, int sizeR, int sizeC)
{
	double* data = new double[sizeR*sizeC];
	int i = 0;
	ifstream myfile(fileName);
	if (myfile.is_open())
	{

		while (myfile.good())
		{
			if (i > sizeR*sizeC - 1) break;
			myfile >> data[i];
			//cout << *(data + i) << ' '; // This line display the converted data on the screen, you may comment it out. 
			i++;
		}
		myfile.close();
	}

	else cout << "Unable to open file";
	//cout << i;

	return data;
}