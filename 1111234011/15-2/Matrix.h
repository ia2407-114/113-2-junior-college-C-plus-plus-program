#ifndef POINT_H
#define POINT_H

class Matrix {
public:
    double x, y;

    Matrix(double, double);
    double operator-(const Matrix&);
};
#endif