#include "Matrix.h"

Matrix::Matrix(int m, int n) {
    row = m;
    column = n;
    element = new int* [row];
    for (int i = 0; i < row; i++)
        element[i] = new int[column];
}

Matrix::Matrix(char name, int m, int n) {
    row = m;
    column = n;
    element = new int* [row];
    for (int i = 0; i < row; i++)
        element[i] = new int[column];

    cout << "¿é¤J " << m << "x" << n << " ¯x°} " << name << ":\n";
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++) {
            cout << name << "[" << i << "][" << j << "] = ";
            cin >> element[i][j];
        }
}

void Matrix::print(const string& label) {
    cout << label << ":\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++)
            cout << element[i][j] << "\t";
        cout << endl;
    }
    cout << endl;
}

Matrix& Matrix::operator*=(const Matrix& x) {
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
            element[i][j] *= x.element[i][j];
    return *this;
}

Matrix& Matrix::operator+=(const Matrix& x) {
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
            element[i][j] += x.element[i][j];
    return *this;
}

Matrix& Matrix::operator-=(const Matrix& x) {
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
            element[i][j] -= x.element[i][j];
    return *this;
}

Matrix& Matrix::operator%=(const Matrix& x) {
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
            element[i][j] = (x.element[i][j] != 0) ? element[i][j] % x.element[i][j] : 0;
    return *this;
}

Matrix::~Matrix() {
    for (int i = 0; i < row; i++)
        delete[] element[i];
    delete[] element;
}
Matrix::Matrix(const Matrix& other) {
    row = other.row;
    column = other.column;
    element = new int* [row];
    for (int i = 0; i < row; ++i) {
        element[i] = new int[column];
        for (int j = 0; j < column; ++j)
            element[i][j] = other.element[i][j];
    }
}

Matrix& Matrix::operator=(const Matrix& other) {
    if (this == &other) return *this;

    for (int i = 0; i < row; ++i)
        delete[] element[i];
    delete[] element;

    row = other.row;
    column = other.column;
    element = new int* [row];
    for (int i = 0; i < row; ++i) {
        element[i] = new int[column];
        for (int j = 0; j < column; ++j)
            element[i][j] = other.element[i][j];
    }

    return *this;
}