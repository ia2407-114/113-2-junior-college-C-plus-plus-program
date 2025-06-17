#include "circ.h"
#include <iostream>
using namespace std;

// ===== circ_1d =====
circ_1d::circ_1d() {
    cout << "�п�J�b�|: ";
    cin >> radius;
}
void circ_1d::compute_circ() {
    aa = 2 * pi * radius;
    cout << "��P�� = " << aa << endl;
}

// ===== crom_3d =====
crom_3d::crom_3d() {
    cout << "�п�J������: ";
    cin >> height;
}
void crom_3d::compute_volume() {
    volume = (1.0 / 3.0) * pi * radius * radius * height;
    cout << "������n = " << volume << endl;
}

// ===== pie_2d =====
pie_2d::pie_2d() {
    area = pi * radius * radius;
}
void pie_2d::compute_area() {
    cout << "�ꭱ�n = " << area << endl;
}

// ===== cylinder_3d =====
cylinder_3d::cylinder_3d() {
    cout << "�п�J��W��: ";
    cin >> height;
}
void cylinder_3d::compute_volume() {
    volume = pi * radius * radius * height;
    cout << "��W��n = " << volume << endl;
}
void cylinder_3d::compute_surface() {
    surface = 2 * pi * radius * (radius + height);
    cout << "��W���n = " << surface << endl;
}

// ===== castle =====
void castle::compute_volume() {
    double total_volume = cylinder_3d::get_volume() + crom_3d::get_volume();
    cout << "�����`��n = " << total_volume << endl;
}

void castle::compute_height() {
    double total_height = cylinder_3d::get_height() + crom_3d::get_height();
    cout << "�����`���� = " << total_height << endl;
}
