#include <iostream>
#include "shapes.h"

using namespace std;
constexpr double PI = 3.14;

Circle::Circle(double r_input) {
    r = r_input;
}
double Circle::area() const {
    return PI * r * r;
}
double Circle::circumference() const {
    return 2 * PI * r;
}
double Circle::getRadius() const {
    return r;
}

IceCreamCone::IceCreamCone(double r_input, double h_input) : Circle(r_input) {
    h = h_input;
}
double IceCreamCone::getHeight() const {
    return h;
}
double IceCreamCone::volume() const {
    return area() * h / 3;
}

Cylinder::Cylinder(double r_input, double h_input) : Circle(r_input) {
    h = h_input;
}
double Cylinder::getHeight() const {
    return h;
}
double Cylinder::volume() const {
    return area() * h;
}
