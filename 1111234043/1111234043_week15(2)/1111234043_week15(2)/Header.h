// Point.h
#ifndef POINT_H
#define POINT_H

class Point {
public:
    double x, y;
    // �غc�l�ŧi
    Point(double _x = 0, double _y = 0);
    // �G�� '-' �B��l�A�p����I���Z��
    double operator-(const Point& p) const;
};

#endif // POINT_H
