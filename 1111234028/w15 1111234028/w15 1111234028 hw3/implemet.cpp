#include <iostream>
using namespace std;

#include "Header.h"

Matrix::Matrix(int x, int y)
{
	int X = x;
	int Y = y;
	int element[2] = { X,Y };
}

double Matrix::operator-(Matrix b)
{
	int X_d, Y_d;

	X_d = this->X - b.X;
	Y_d = this->Y - b.Y;

	return sqrt(X_d * X_d + Y_d * Y_d);
}