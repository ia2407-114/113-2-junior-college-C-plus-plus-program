#ifndef POINT_H
#define POINT_H

class Point {
private:
    double x, y;

public:
    Point(double x = 0, double y = 0);

    // 取得 X, Y
    double getX() const;
    double getY() const;

    // 計算距離運算子重載
    double operator-(const Point& other) const;
};

#endif
