#include <iostream>
using namespace std;

#include "Matrix.h"

Matrix::Matrix(int m, int n)
{
    row = m;
    column = n;

    // �t�mmxn���G���}�Celement���ʺA�O����
    element = new int* [m];
    int i;
    for (i = 0; i < m; i++)
        element[i] = new int[n];
}