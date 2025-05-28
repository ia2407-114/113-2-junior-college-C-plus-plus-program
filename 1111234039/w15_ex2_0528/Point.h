#ifndef POINT_H
#define POINT_H

class Point {
private:
    double x, y;

public:
    Point(double x = 0, double y = 0);

    // ���o X, Y
    double getX() const;
    double getY() const;

    // �p��Z���B��l����
    double operator-(const Point& other) const;
};

#endif
