#include "Matrix.h"


Matrix::Matrix()
{
}

Matrix::Matrix(int r,int c)
{
	rows = r;
	cols = c;
	matrix = new double*[rows];
	for (unsigned int i = 0; i < rows; i++)
	{
		matrix[i] = new double[cols];
		for (unsigned int j = 0; j < cols; j++)
		{
			matrix[i][j] = 0;
		}
	}
}

Matrix::Matrix(double ** m, int r , int c)
{
	matrix = m;
	rows = r;
	cols = c;
}

Matrix Matrix::operator+(Matrix &m)
{
	Matrix result = Matrix(m.getRows(), m.getCols());
	for (unsigned int i = 0; i < getRows(); i++)
	{
		for (unsigned int j = 0; j < getCols(); j++)
		{
			result.getMatrix()[i][j] = this->getMatrix()[i][j] + m.getMatrix()[i][j];
		}
	}
	return result;
}

Matrix Matrix::operator-(Matrix &m)
{
	Matrix result = Matrix(m.getRows(), m.getCols());
	for (unsigned int i = 0; i < getRows(); i++)
	{
		for (unsigned int j = 0; j < getCols(); j++)
		{
			result.getMatrix()[i][j] = this->getMatrix()[i][j] - m.getMatrix()[i][j];
		}
	}
	return result;
}

Matrix Matrix::operator*(Matrix &m)
{
	unsigned int inner = m.getRows();
	Matrix result = Matrix(this->getRows(), m.getCols());
	for (unsigned int i = 0; i < result.getRows(); i++)
	{
		for (unsigned int j = 0; j < result.getCols(); j++)
		{
			for (unsigned int k = 0; k < inner; k++) {
				result.getMatrix()[i][j] += this->getMatrix()[i][k] * m.getMatrix()[k][j];
			}
		}
	}
	return result;
}

double ** Matrix::getMatrix() 
{
	return matrix;
}

int Matrix::getRows() 
{
	return rows;
}
int Matrix::getCols() 
{
	return cols;
}

void Matrix::print()
{
	for (unsigned int i = 0; i < getRows(); i++) 
	{
		cout << "|";
		for (unsigned int j = 0; j < getCols(); j++) 
		{
			cout << setw(5) << getMatrix()[i][j];
		}
		cout << "|\n";
	}
}


