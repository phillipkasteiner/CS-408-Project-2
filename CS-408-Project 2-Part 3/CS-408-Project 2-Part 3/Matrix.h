#pragma once
#include <iostream>
#include <iomanip>

using namespace std;

class Matrix
{

public:
	Matrix();
	Matrix(int,int);
	Matrix(double **, int, int);
	Matrix operator+(Matrix &);
	Matrix operator-(Matrix &);
	Matrix operator*(Matrix &);

	double ** getMatrix();
	int getRows();
	int getCols();

	void print();


private:
	double** matrix;
	int rows;
	int cols;
};

