#include <iostream> 
#include <iomanip> 
#include <ctime> 

using namespace std;

double** createMatrix(int);
double** addMatrix(double**, double**, int);
double** subMatrix(double**, double**, int);
double** multMatrix(double**, double**, int);
void printM(double**, int row, int column);


int main()
{
	srand(time(NULL));

	int choice = 0;
	int matrixSize;
	double ** m1;
	double ** m2;
	double ** m3;
	double ** m4;
	double ** m5;

	cout << "Matrix Calculator" << endl;
	cout << "==============================" << endl;
	while(choice != -1)
	{
		cout << "Please choose from the following: " << endl;
		cout << "1 - Add Two N x M Matricies" << endl;
		cout << "2 - Subtract Two N x M Matricies" << endl;
		cout << "3 - Multiply Two Matricies" << endl;
		cout << "(-1 to exit)" << endl;
		cout << "Choice > ";
		cin >> choice;
		if (choice == 1) 
		{
			cout << endl << "Matrix Addition" << endl;
			cout << "Please enter the demensions of your matrix." << endl;
			cout << "> ";
			cin >> matrixSize;
			m1 = createMatrix(matrixSize);
			m2 = createMatrix(matrixSize);
			cout << "Matrix creation complete..." << endl;
			cout << "Addind M1 and M2" << endl;
			cout << "M1" << endl;
			printM(m1, matrixSize, matrixSize);
			cout << "M2" << endl;
			printM(m2, matrixSize, matrixSize);
			m3 = addMatrix(m1, m2, matrixSize);
			cout << "The sum of the matricies is: " << endl;
			printM(m3, matrixSize, matrixSize);
		}
		else if (choice == 2) 
		{
			cout << endl << "Matrix Subtraction" << endl;
			cout << "Please enter the demensions of your matrix." << endl;
			cout << "> ";
			cin >> matrixSize;
			m1 = createMatrix(matrixSize);
			m2 = createMatrix(matrixSize);
			cout << "Matrix creation complete..." << endl;
			cout << "Addind M1 and M2" << endl;
			cout << "M1" << endl;
			printM(m1, matrixSize, matrixSize);
			cout << "M2" << endl;
			printM(m2, matrixSize, matrixSize);
			m4 = subMatrix(m1, m2, matrixSize);
			cout << "The difference of the matricies is: " << endl;
			printM(m4, matrixSize, matrixSize);
		}
		else if (choice == 3)
		{
			cout << endl << "Matrix Multiplication" << endl;
			cout << "Please enter the demensions of your matrix." << endl;
			cout << "> ";
			cin >> matrixSize;
			m1 = createMatrix(matrixSize);
			m2 = createMatrix(matrixSize);
			cout << "Matrix creation complete..." << endl;
			cout << "Addind M1 and M2" << endl;
			cout << "M1" << endl;
			printM(m1, matrixSize, matrixSize);
			cout << "M2" << endl;
			printM(m2, matrixSize, matrixSize);
			m5 = multMatrix(m1, m2, matrixSize);
			cout << "The product of the matricies is: " << endl;
			printM(m5, matrixSize, matrixSize);
		}
		else if (choice == -1) 
		{
			cout << "Goodbye" << endl;
		}
		else 
		{
			cout << "Invalid entry" << endl;
			cout << endl;
		}
	}
}

double ** createMatrix(int size) 
{
	double** m = new double*[size];
	for (unsigned int i = 0; i < size; i++)
	{
		m[i] = new double[size];
		for (unsigned int j = 0; j < size; j++) 
		{
			m[i][j] = rand() % 20 - 10;
		}
	}
	return m;
}

void printM(double** m, int row, int column)
{
	for (unsigned int i = 0; i < row; i++)
	{
		cout << "|";
		for (unsigned int j = 0; j < column; j++)
		{
			cout << setw(5) << m[i][j];
		}
		cout << "|" << endl;
	}
	cout << endl;
}

double**addMatrix(double** m1, double** m2, int max)
{
	double **m3 = createMatrix(max);

	for (unsigned int i = 0; i < max; i++)
	{
		for (unsigned int j = 0; j < max; j++)
			m3[i][j] = m1[i][j] + m2[i][j];
	}
	return m3;
}

double ** subMatrix(double** m1, double** m2, int max)
{
	double **m3 = createMatrix(max);

	for (unsigned int i = 0; i < max; i++)
	{
		for (unsigned int j = 0; j < max; j++)
		{
			m3[i][j] = m1[i][j] - m2[i][j];
		}
	}
	return m3;
}

double ** multMatrix(double** m1, double** m2, int max)
{
	double **m3 = new double*[max];
	for (unsigned int i = 0; i < max; i++)
	{
		m3[i] = new double[max];
		for (unsigned int j = 0; j < max; j++)
		{
			m3[i][j] = 0;
			for (unsigned int k = 0; k < max; k++)
			{
				m3[i][j] += m1[i][k] * m2[k][j];
			}
		}
	}
	return m3;
}