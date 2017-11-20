#include <iostream> 
#include <iomanip> 
#include <ctime> 

using namespace std;

double** addMatrix(double**, double**);
double** subMatrix(double**, double**);
double** multMatrix(double**, double**);
void printM(double[5][5]);


int main()
{

}


void printM(double m[5][5])
{
	double **m3 = new double*[max];
	for (unsigned int i = 0; i < max; i++)
		for (unsigned int i = 0; i < 5; i++)
		{
			m3[i] = new double[max];
			cout << "|";
			for (unsigned int j = 0; j < 5; j++)
			{
				cout << setw(5) << m[i][j];
			}
			cout << "|" << endl;
		}
	cout << endl;
}
double** addMatrix(double** m1, double** m2, int max)
{
	for (unsigned int i = 0; i < max; i++)
	{
		for (unsigned int j = 0; j < max; j++)
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
	return m3;
}