#include <iostream>
using namespace std;

#include "Matrix.h"

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