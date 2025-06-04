#pragma once
#include <iostream>
using namespace std;
class Point {
public:
    double x, y;
    Point(double x = 0, double y = 0) {
        this->x = x;
        this->y = y;
    }
    // ���� - �B��l�G�p����I�������Z��
    double operator-(const Point & other) {
        return sqrt(pow(x - other.x, 2) + pow(y - other.y, 2));
    };
};