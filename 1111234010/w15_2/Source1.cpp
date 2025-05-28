#include "Point.h"
#include <cmath> 


Point::Point(double xVal, double yVal) {
    x = xVal;
    y = yVal;
}

double Point::operator-(const Point& other) {

    double dx = this->x - other.x;
    double dy = this->y - other.y;

    return sqrt(dx * dx + dy * dy);
}