#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <cmath>
using namespace std;

class Point {
private:
    int x, y;

public:
    Point(int x = 0, int y = 0);
    void input(char name);
    void print(char name) const;

    int operator-(const Point& other) const;  
};
#endif