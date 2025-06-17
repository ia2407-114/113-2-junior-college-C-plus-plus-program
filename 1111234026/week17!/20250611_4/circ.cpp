#include "circ.h"
#include <iostream>
using namespace std;

// ===== circ_1d =====
circ_1d::circ_1d() {
    cout << "請輸入半徑: ";
    cin >> radius;
}
void circ_1d::compute_circ() {
    aa = 2 * pi * radius;
    cout << "圓周長 = " << aa << endl;
}

// ===== crom_3d =====
crom_3d::crom_3d() {
    cout << "請輸入甜筒高: ";
    cin >> height;
}
void crom_3d::compute_volume() {
    volume = (1.0 / 3.0) * pi * radius * radius * height;
    cout << "甜筒體積 = " << volume << endl;
}

// ===== pie_2d =====
pie_2d::pie_2d() {
    area = pi * radius * radius;
}
void pie_2d::compute_area() {
    cout << "圓面積 = " << area << endl;
}

// ===== cylinder_3d =====
cylinder_3d::cylinder_3d() {
    cout << "請輸入圓柱高: ";
    cin >> height;
}
void cylinder_3d::compute_volume() {
    volume = pi * radius * radius * height;
    cout << "圓柱體積 = " << volume << endl;
}
void cylinder_3d::compute_surface() {
    surface = 2 * pi * radius * (radius + height);
    cout << "圓柱表面積 = " << surface << endl;
}

// ===== castle =====
void castle::compute_volume() {
    double total_volume = cylinder_3d::get_volume() + crom_3d::get_volume();
    cout << "城樓總體積 = " << total_volume << endl;
}

void castle::compute_height() {
    double total_height = cylinder_3d::get_height() + crom_3d::get_height();
    cout << "城樓總高度 = " << total_height << endl;
}
