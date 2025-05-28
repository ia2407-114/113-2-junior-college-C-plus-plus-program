#ifndef MATRIX_H
#define MATRIX_H

class Matrix {
public:
    int row, column;
    int** element;

    Matrix(int m, int n);
    Matrix(char name, int m, int n);

    Matrix operator +=(Matrix x);
    Matrix operator -=(Matrix x);
    Matrix operator *=(Matrix x);
    Matrix operator %=(Matrix x);
};

#endif
