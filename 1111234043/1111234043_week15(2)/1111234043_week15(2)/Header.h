// Point.h
#ifndef POINT_H
#define POINT_H

class Point {
public:
    double x, y;
    // 建構子宣告
    Point(double _x = 0, double _y = 0);
    // 二元 '-' 運算子，計算兩點間距離
    double operator-(const Point& p) const;
};

#endif // POINT_H
