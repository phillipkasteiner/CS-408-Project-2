#include <iostream>

using namespace std;

double** addMatrix(double**,double**);
double** subMatrix(double**, double**);
double** multMatrix(double**, double**);

int main() 
{
	
}

double** addMatrix(double** m1, double** m2, int max)
{
	double **m3 = new double* [max];
	for (unsigned int i = 0; i < max; i++) 
	{
		m3[i] = new double[max];
	}

	for (unsigned int i = 0; i < max; i++) 
	{
		for (unsigned int j = 0; j < max; j++) 
		{
			m3[i][j] = m1[i][j] + m2[i][j];
		}
	}
	return m3;
}

double ** subMatrix(double** m1, double** m2, int max)
{
	double **m3 = new double*[max];
	for (unsigned int i = 0; i < max; i++)
	{
		m3[i] = new double[max];
	}

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
	for (unsigned int i = 0; i < N; i++)
	{
		for (unsigned int j = 0; j < N; j++)
		{
			m3[i][j] = 0;
			for (unsigned int k = 0; k < N; k++)
			{
				m3[i][j] += m1[i][k] * m2[k][j];
			}
		}
	}
	return m3;
}