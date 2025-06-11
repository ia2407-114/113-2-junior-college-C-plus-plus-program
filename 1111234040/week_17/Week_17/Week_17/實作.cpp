#include <iostream>
#include <cmath>
#include "shapes.h"
using namespace std;

#ifndef M_PI
#define M_PI 3.14
#endif


// --- Pie ---
Pie::Pie(double r) : radius(r) {}
double Pie::area() const {
    return M_PI * radius * radius;
}
void Pie::input() {
    cout << "��J�b�|�G";
    cin >> radius;
}
void Pie::print() const {
    cout << "�b�| = " << radius << ", ���n = " << area() << endl;
}

// --- Cone ---
Cone::Cone(double r, double h) : Pie(r), height(h) {}
double Cone::volume() const {
    return (1.0 / 3) * area() * height;
}
void Cone::input() {
    Pie::input();
    cout << "��J���סG";
    cin >> height;
}
void Cone::print() const {
    Pie::print();
    cout << "���� = " << height << ", �@����n = " << volume() << endl;
}

// --- Height ---
Height::Height(double h) : height(h) {}
void Height::input() {
    cout << "��J���סG";
    cin >> height;
}
void Height::print() const {
    cout << "���� = " << height << endl;
}

// --- Cylinder (�h�h�~��) ---
Cylinder::Cylinder(double r, double h) : Pie(r) {
    height = h;
}
double Cylinder::volume() const {
    return area() * height;
}
void Cylinder::input() {
    Pie::input();
    cout << "��J���סG";
    cin >> height;
}
void Cylinder::print() const {
    Pie::print();
    cout << "���� = " << height << ", ��W��n = " << volume() << endl;
}

// --- CylinderMultiple (�h���~��) ---
CylinderMultiple::CylinderMultiple(double r, double h) : Pie(r), Height(h) {}
double CylinderMultiple::volume() const {
    return area() * height;
}
void CylinderMultiple::input() {
    Pie::input();
    Height::input();
}
void CylinderMultiple::print() const {
    Pie::print();
    Height::print();
    cout << "��W��n(�h���~��) = " << volume() << endl;
}
