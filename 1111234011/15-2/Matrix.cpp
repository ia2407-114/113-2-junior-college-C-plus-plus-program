#include "Matrix.h"
#include <cmath> 


Matrix::Matrix(double xVal, double yVal) {
    x = xVal;
    y = yVal;
}

double Matrix::operator-(const Matrix& other) {

    double dx = this->x - other.x;
    double dy = this->y - other.y;

    return sqrt(dx * dx + dy * dy);
}