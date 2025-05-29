#include "Header.h"

Matrix::Matrix(int m, int n)
{
    row = m;
    column = n;

    // 配置mxn的二維陣列element之動態記憶體
    element = new int* [m];
    int i;
    for (i = 0; i < m; i++)
        element[i] = new int[n];
}

void Matrix::operator*=(Matrix x)
{
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
        {
            this->element[i][j] = this->element[i][j] * x.element[i][j];
        }
}

void Matrix::operator-=(Matrix x)
{
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
        {
            this->element[i][j] = this->element[i][j] - x.element[i][j];
        }
}

void Matrix::operator+=(Matrix x)
{
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
        {
            this->element[i][j] = this->element[i][j] + x.element[i][j];
        }
}

void Matrix::operator%=(Matrix x)
{
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
        {
            this->element[i][j] = this->element[i][j] % x.element[i][j];
        }
}