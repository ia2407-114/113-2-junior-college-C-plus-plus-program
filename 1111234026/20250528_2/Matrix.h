// Matrix.h
#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
using namespace std;

class Matrix {
public:
    int row, column;
    int** element;

    Matrix(int m, int n);
    Matrix(char name, int m, int n);
    ~Matrix();
    Matrix(const Matrix& other);             
    Matrix& operator=(const Matrix& other);     
    void print(const string& label);  // ¥Î©ó¦L¥X¯x°}

    Matrix& operator*=(const Matrix& x);
    Matrix& operator+=(const Matrix& x);
    Matrix& operator-=(const Matrix& x);
    Matrix& operator%=(const Matrix& x);
};

#endif
