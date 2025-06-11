#pragma once
#include <iostream>
using namespace std;

class Matrix
{
public:
    int x, y;
    Matrix(int m, int n);
    double operator-(Matrix B);
};