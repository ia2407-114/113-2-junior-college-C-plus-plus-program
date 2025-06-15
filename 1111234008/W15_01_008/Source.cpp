#include <iostream>
#include "Matrix.h"
using namespace std;

Matrix::Matrix(int m, int n) {
    row = m;
    column = n;
    element = new int* [m];
    for (int i = 0; i < m; i++)
        element[i] = new int[n];
}

Matrix::Matrix(char name, int m, int n) {
    row = m;
    column = n;
    element = new int* [m];
    for (int i = 0; i < m; i++)
        element[i] = new int[n];

    cout << "¿é¤J¤@" << m << 'x' << n << "¯x°}" << name << endl;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            cout << name << '[' << i << "][" << j << "]=";
            cin >> element[i][j];
        }
}

Matrix Matrix::operator +=(Matrix x) {
    for (int i = 0; i < this->row; i++)
        for (int j = 0; j < this->column; j++)
            this->element[i][j] += x.element[i][j];
    return *this;
}

Matrix Matrix::operator -=(Matrix x) {
    for (int i = 0; i < this->row; i++)
        for (int j = 0; j < this->column; j++)
            this->element[i][j] -= x.element[i][j];
    return *this;
}

Matrix Matrix::operator *=(Matrix x) {
    for (int i = 0; i < this->row; i++)
        for (int j = 0; j < this->column; j++)
            this->element[i][j] *= x.element[i][j];
    return *this;
}

Matrix Matrix::operator %=(Matrix x) {
    for (int i = 0; i < this->row; i++)
        for (int j = 0; j < this->column; j++)
            this->element[i][j] %= x.element[i][j];
    return *this;
}