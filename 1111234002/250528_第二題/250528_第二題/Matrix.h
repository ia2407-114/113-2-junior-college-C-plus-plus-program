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
    // 重載 - 運算子：計算兩點之間的距離
    double operator-(const Point & other) {
        return sqrt(pow(x - other.x, 2) + pow(y - other.y, 2));
    };
};