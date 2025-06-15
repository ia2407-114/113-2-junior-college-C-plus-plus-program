#include "shapes.h"

// 圓餅 (Circle) 類別的實作
Circle::Circle(double r_input) : r(r_input) {}

double Circle::area() const {
    return PI * r * r;
}

double Circle::circumference() const {
    return 2 * PI * r;
}

double Circle::getRadius() const {
    return r;
}

// 甜筒 (IceCreamCone) 類別的實作
IceCreamCone::IceCreamCone(double r_input, double h_input) : Circle(r_input), h(h_input) {}

double IceCreamCone::volume() const {
    return area() * h / 3;
}

double IceCreamCone::getHeight() const {
    return h;
}

// 圓柱體 (Cylinder) 類別的實作
Cylinder::Cylinder(double r_input, double h_input) : Circle(r_input), h(h_input) {}

double Cylinder::volume() const {
    return area() * h;
}

double Cylinder::getHeight() const {
    return h;
}

// ========================================================
// 多層繼承範例
// CircleShape 類別的實作
CircleShape::CircleShape(double r_input) : r(r_input) {}

double CircleShape::area() const {
    return PI * r * r;
}

double CircleShape::circumference() const {
    return 2 * PI * r;
}

double CircleShape::getRadius() const {
    return r;
}

double CircleShape::volume() const {
    return 0; // 圓本身並無體積
}

// 甜筒 (IceCreamCone) 類別的實作
IceCreamConeShape::IceCreamConeShape(double r_input, double h_input) : CircleShape(r_input), h(h_input) {}

double IceCreamConeShape::volume() const {
    return area() * h / 3;
}

double IceCreamConeShape::getHeight() const {
    return h;
}

// 圓柱體 (Cylinder) 類別的實作
CylinderShape::CylinderShape(double r_input, double h_input) : CircleShape(r_input), h(h_input) {}

double CylinderShape::volume() const {
    return area() * h;
}

double CylinderShape::getHeight() const {
    return h;
}

// ========================================================
// 多重繼承範例
// CircleArea 類別的實作
CircleArea::CircleArea(double r_input) : r(r_input) {}

double CircleArea::area() const {
    return PI * r * r;
}

double CircleArea::getRadius() const {
    return r;
}

// 甜筒 (IceCreamCone) 類別的實作
IceCreamConeVolume::IceCreamConeVolume(double r_input, double h_input) : CircleArea(r_input), h(h_input) {}

double IceCreamConeVolume::volume() const {
    return area() * h / 3;
}

double IceCreamConeVolume::getHeight() const {
    return h;
}

// 圓柱體 (Cylinder) 類別的實作
CylinderVolume::CylinderVolume(double r_input, double h_input) : CircleArea(r_input), h(h_input) {}

double CylinderVolume::volume() const {
    return area() * h;
}

double CylinderVolume::getHeight() const {
    return h;
}