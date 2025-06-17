#include <iostream>
#include "Matrix.h"
using namespace std;

Matrix::Matrix(int m, int n)
{
    row = m;
    column = n;
    element = new int* [m];
    for (int i = 0; i < m; i++)
        element[i] = new int[n];
}

Matrix::Matrix(char name, int m, int n)
{
    row = m;
    column = n;
    element = new int* [m];
    for (int i = 0; i < m; i++)
        element[i] = new int[n];

    cout << "¿é¤J¤@" << m << 'x' << n << "¯x°}" << name << endl;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            cout << name << '[' << i << "][" << j << "]=";
            cin >> element[i][j];
        }
}
// ¦L¥X¯x°}
void Matrix::print(const char* label)
{
    if (label && *label) cout << label << " = \n";
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < column; ++j)
            cout << element[i][j] << '\t';
        cout << endl;
    }
}