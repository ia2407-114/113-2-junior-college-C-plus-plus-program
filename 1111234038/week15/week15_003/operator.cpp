#include <iostream>
#include "operator.h"
#include <cmath>
using namespace std;

Matrix::Matrix(int m, int n)
{
	x = m;
	y = n;
}
double Matrix::operator-(Matrix B)
{
	int x_dis, y_dis;
	x_dis = this->x - B.x;
	y_dis = this->y - B.y;

	return sqrt(x_dis * x_dis + y_dis * y_dis);
}
