#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
void printM(double[5][5]);
void addMatrix(double[5][5], double[5][5], double[5][5], int);
void subMatrix(double[5][5], double[5][5], double[5][5], int);
void multMatrix(double[5][5], double[5][5], double[5][5], int);

int main() 
{
	srand(time(NULL));

	const int MAX = 5;
	double m1[MAX][MAX];
	double m2[MAX][MAX];
	double m3[MAX][MAX];
	double m4[MAX][MAX];
	double m5[MAX][MAX];

	for (unsigned int i = 0; i < MAX; i ++) 
	{
		for (unsigned int j = 0; j < MAX; j ++) 
		{
			m1[i][j] = rand() % 20 - 10;
			m2[i][j] = rand() % 20 - 10;
		}
	}
	
	cout << "Matrix Addition, Subtraction and Multiplication" << endl;
	cout << "==================================================" << endl;
	cout << "Matrix 1: " << endl;
	printM(m1);
	cout << "Matrix 2: " << endl;
	printM(m2);
	cout << "==================================================" << endl;
	cout << "Addition:" << endl;
	cout << "Matrix Sum: " << endl;
	
	addMatrix(m1, m2, m3, MAX);
	printM(m3);

	cout << "Subtraction: " << endl;
	cout << "Matrix Difference: " << endl;

	subMatrix(m1, m2, m4, MAX);
	printM(m4);

	cout << "Multiplication: " << endl;
	cout << "Matrix Product: " << endl;

	multMatrix(m1, m2, m5, MAX);
	printM(m5);
}

void printM(double m[5][5])
{
	for (unsigned int i = 0; i < 5; i++)
	{
		cout << "|";
		for (unsigned int j = 0; j < 5; j++)
		{
			cout << setw(5) << m[i][j];
		}
		cout << "|" << endl;
	}
	cout << endl;
}

void addMatrix(double m1[5][5], double m2[5][5], double m3[5][5], int max)
{
	for (unsigned int i = 0; i < max; i++) 
	{
		for (unsigned int j = 0; j < max; j++) 
		{
			m3[i][j] = m1[i][j] + m2[i][j];
		}
	}
}

void subMatrix(double m1[5][5], double m2[5][5], double m3[5][5], int max)
{
	for (unsigned int i = 0; i < max; i++)
	{
		for (unsigned int j = 0; j < max; j++)
		{
			m3[i][j] = m1[i][j] - m2[i][j];
		}
	}
}

void multMatrix(double m1[5][5], double m2[5][5], double m3[5][5], int max)
{
	for (unsigned int i = 0; i < max; i++)
	{
		for (unsigned int j = 0; j < max; j++)
		{
			m3[i][j] = 0;
			for (unsigned int k = 0; k < max; k++)
			{
				m3[i][j] += m1[i][k] * m2[k][j];
			}
		}
	}
}