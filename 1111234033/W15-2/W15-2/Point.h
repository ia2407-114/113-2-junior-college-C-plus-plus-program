#ifndef POINT_H
#define POINT_H

class Point {
public:
    double x, y;


    Point(double, double);

    double operator-(const Point&);
};

#endif
