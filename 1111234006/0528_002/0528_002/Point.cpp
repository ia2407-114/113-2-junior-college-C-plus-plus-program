#include "Point.h"
#include <cmath>

Point::Point(double x, double y) : x(x), y(y) {}

double Point::getX() const { return x; }
double Point::getY() const { return y; }

double Point::operator-(const Point& other) const {
    double dx = this->x - other.x;
    double dy = this->y - other.y;
    return std::sqrt(dx * dx + dy * dy);
}