#include <iostream>
#include "operator.h"
using namespace std;

Matrix::Matrix(int m, int n)
{
    row = m;
    column = n;

    element = new int* [m];
    int i;
    for (i = 0; i < m; i++)
        element[i] = new int[n];
}

Matrix::Matrix(char name, int m, int n)
{
    row = m;
    column = n;

    element = new int* [m];
    int i, j;
    for (i = 0; i < m; i++)
        element[i] = new int[n];

    cout << "��J�@" << m << 'x' << n << "�x�}" << name << endl;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
        {
            cout << name << '[' << i << "]["
                << j << "]=";
            cin >> element[i][j];
        }
}

void Matrix::operator+=(Matrix x)
{
    int i, j;
    for (i = 0; i < this->row; i++)
        for (j = 0; j < this->column; j++)
            this->element[i][j] = this->element[i][j] + x.element[i][j];
}
void Matrix::operator-=(Matrix x)
{
    int i, j;
    for (i = 0; i < this->row; i++)
        for (j = 0; j < this->column; j++)
            this->element[i][j] = this->element[i][j] - x.element[i][j];
}
void Matrix::operator*=(Matrix x)
{
    int i, j;
    for (i = 0; i < this->row; i++)
        for (j = 0; j < this->column; j++)
            this->element[i][j] = this->element[i][j] * x.element[i][j];
}
void Matrix::operator%=(Matrix x)
{
    int i, j;
    for (i = 0; i < this->row; i++)
        for (j = 0; j < this->column; j++)
            this->element[i][j] = this->element[i][j] % x.element[i][j];
}