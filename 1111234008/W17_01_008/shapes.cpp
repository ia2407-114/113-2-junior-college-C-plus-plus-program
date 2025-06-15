#include "shapes.h"

// ��� (Circle) ���O����@
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

// ���� (IceCreamCone) ���O����@
IceCreamCone::IceCreamCone(double r_input, double h_input) : Circle(r_input), h(h_input) {}

double IceCreamCone::volume() const {
    return area() * h / 3;
}

double IceCreamCone::getHeight() const {
    return h;
}

// ��W�� (Cylinder) ���O����@
Cylinder::Cylinder(double r_input, double h_input) : Circle(r_input), h(h_input) {}

double Cylinder::volume() const {
    return area() * h;
}

double Cylinder::getHeight() const {
    return h;
}

// ========================================================
// �h�h�~�ӽd��
// CircleShape ���O����@
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
    return 0; // �ꥻ���õL��n
}

// ���� (IceCreamCone) ���O����@
IceCreamConeShape::IceCreamConeShape(double r_input, double h_input) : CircleShape(r_input), h(h_input) {}

double IceCreamConeShape::volume() const {
    return area() * h / 3;
}

double IceCreamConeShape::getHeight() const {
    return h;
}

// ��W�� (Cylinder) ���O����@
CylinderShape::CylinderShape(double r_input, double h_input) : CircleShape(r_input), h(h_input) {}

double CylinderShape::volume() const {
    return area() * h;
}

double CylinderShape::getHeight() const {
    return h;
}

// ========================================================
// �h���~�ӽd��
// CircleArea ���O����@
CircleArea::CircleArea(double r_input) : r(r_input) {}

double CircleArea::area() const {
    return PI * r * r;
}

double CircleArea::getRadius() const {
    return r;
}

// ���� (IceCreamCone) ���O����@
IceCreamConeVolume::IceCreamConeVolume(double r_input, double h_input) : CircleArea(r_input), h(h_input) {}

double IceCreamConeVolume::volume() const {
    return area() * h / 3;
}

double IceCreamConeVolume::getHeight() const {
    return h;
}

// ��W�� (Cylinder) ���O����@
CylinderVolume::CylinderVolume(double r_input, double h_input) : CircleArea(r_input), h(h_input) {}

double CylinderVolume::volume() const {
    return area() * h;
}

double CylinderVolume::getHeight() const {
    return h;
}