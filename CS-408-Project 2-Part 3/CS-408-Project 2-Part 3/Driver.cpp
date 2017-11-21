
#include "Matrix.h"
#include <iostream>
#include <ctime>

using namespace std;

void createMatrix(Matrix &, int);

int main()
{
	srand(time(NULL));

	int matrixSize = 0;
	int choice = 0;
	Matrix result;
	Matrix m1;
	Matrix m2;
	cout << "Matrix Arithmatic Sim" << endl;
	cout << "=================================" << endl;
	do {
		cout << "Choose from the following: " << endl;
		cout << "1) M3 = M1 + M2" << endl;
		cout << "2) M4 = M1 - M2" << endl;
		cout << "3) M5 = M1 * M2" << endl;
		cout << "(-1 to exit)" << endl;
		cout << "> ";
		cin >> choice;
		if (choice == 1) 
		{
			cout << endl << "Addition" << endl;
			cout << "Please enter the demensions of your matrix." << endl;
			cout << "> ";
			cin >> matrixSize;
			createMatrix(m1, matrixSize);
			createMatrix(m2, matrixSize);
			cout << "Matrix creation complete..." << endl;
			cout << "Adding M1 and M2" << endl;
			cout << "M1" << endl;
			m1.print();
			cout << "M2" << endl;
			m2.print();
			result = m1 + m2;
			cout << "Sum of Matricies" << endl;
			result.print();
		}
		else if (choice == 2)
		{
			cout << endl << "Subtraction" << endl;
			cout << "Please enter the demensions of your matrix." << endl;
			cout << "> ";
			cin >> matrixSize;
			createMatrix(m1, matrixSize);
			createMatrix(m2, matrixSize);
			cout << "Matrix creation complete..." << endl;
			cout << "Subtracting M1 and M2" << endl;
			cout << "M1" << endl;
			m1.print();
			cout << "M2" << endl;
			m2.print();
			result = m1 - m2;
			cout << "Difference of Matricies" << endl;
			result.print();
		}
		else if (choice == 3) 
		{
			cout << endl << "Multiplication" << endl;
			cout << "Please enter the demensions of your matrix." << endl;
			cout << "> ";
			cin >> matrixSize;
			createMatrix(m1, matrixSize);
			createMatrix(m2, matrixSize);
			cout << "Matrix creation complete..." << endl;
			cout << "Multipling M1 and M2" << endl;
			cout << "M1" << endl;
			m1.print();
			cout << "M2" << endl;
			m2.print();
			result = m1 * m2;
			cout << "Product of M1 and M2" << endl;
			result.print();
		}
		else if (choice == -1)
		{
			cout << "Goodbye" << endl;
		}
		else 
		{
			cout << "Invalid Input" << endl << endl;
		}
	} while (choice != -1);
}

void createMatrix(Matrix &m1, int max) 
{
	double **temp = new double*[max];
	for (unsigned int i = 0; i < max; i++)
	{
		temp[i] = new double[max];
		for (unsigned int j = 0; j < max; j++)
		{
			temp[i][j] = rand() % 20 - 10;
		}
	}
	m1 = Matrix(temp, max, max);
}