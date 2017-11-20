// CS-408-Project 2-Part 3.cpp : Defines the entry point for the console application.
//

#include "Matrix.h"
#include <iostream>

using namespace std;

void prompt(Matrix &, Matrix &);

int main()
{
	const int MAX = 5;
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
		cout << "> ";
		cin >> choice;
		if (choice == 1) 
		{
			result = m1 + m2;
			result.print();
		}
		else if (choice == 2)
		{
			result = m1 - m2;
			result.print();
		}
		else if (choice == 3) 
		{
			result = m1 * m2;
			result.print();
		}
		else if (choice == -1)
		{
			cout << "Goodbye" << endl;
		}
		else 
		{
			cout << "============================" << endl;
			continue;
		}
	} while (choice != 0);
}

void prompt(Matrix &m1) 
{
	int rows;
	int cols;
	cout << "(enter all values separated by sign space)" << endl;
	cout << "Choose your matrix sizes (ex: 3 2) > ";
	cin >> rows >> cols;
	double **temp = new double*[rows];
	for (unsigned int i = 0; i < rows; i++) 
	{
		temp[i] = new double[cols];
	}
	for (unsigned int i = 0; i < rows; i++) 
	{
		cout << "Enter values for row #" << i << endl;
		for (unsigned int j = 0; j < cols; j++)
		{
			cout << "> ";
			cin >> temp[i][j];
		}
	}
}