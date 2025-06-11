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
    cout << "輸入半徑：";
    cin >> radius;
}
void Pie::print() const {
    cout << "半徑 = " << radius << ", 面積 = " << area() << endl;
}

// --- Cone ---
Cone::Cone(double r, double h) : Pie(r), height(h) {}
double Cone::volume() const {
    return (1.0 / 3) * area() * height;
}
void Cone::input() {
    Pie::input();
    cout << "輸入高度：";
    cin >> height;
}
void Cone::print() const {
    Pie::print();
    cout << "高度 = " << height << ", 錐體體積 = " << volume() << endl;
}

// --- Height ---
Height::Height(double h) : height(h) {}
void Height::input() {
    cout << "輸入高度：";
    cin >> height;
}
void Height::print() const {
    cout << "高度 = " << height << endl;
}

// --- Cylinder (多層繼承) ---
Cylinder::Cylinder(double r, double h) : Pie(r) {
    height = h;
}
double Cylinder::volume() const {
    return area() * height;
}
void Cylinder::input() {
    Pie::input();
    cout << "輸入高度：";
    cin >> height;
}
void Cylinder::print() const {
    Pie::print();
    cout << "高度 = " << height << ", 圓柱體積 = " << volume() << endl;
}

// --- CylinderMultiple (多重繼承) ---
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
    cout << "圓柱體積(多重繼承) = " << volume() << endl;
}
