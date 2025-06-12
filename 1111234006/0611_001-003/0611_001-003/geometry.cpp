#include <iostream>
#include "geometry.h"
using namespace std;

// -------------------------
// 1D ��P���O�GCirc_1D
// -------------------------
Circ_1D::Circ_1D(double r) : radius(r) {}  // �]�w�b�|

double Circ_1D::compute_circ() const {
    return 2 * pi * radius;  // �p���P��
}

// -------------------------
// 3D ���@�����O�GCron_3D
// �~�Ӧ� Circ_1D
// -------------------------
Cron_3D::Cron_3D(double r, double h)
    : Circ_1D(r), height(h), volume(0.0) {}  // ��l�ƥb�|�B���סB��n

double Cron_3D::compute_volume() {
    volume = (1.0 / 3) * pi * radius * radius * height;  // ��n����
    return volume;
}

// -------------------------
// 2D ������O�GPie_2D
// �~�Ӧ� Circ_1D
// -------------------------
Pie_2D::Pie_2D(double r)
    : Circ_1D(r), area(0.0) {}  // ��l�ƥb�|�B���n

double Pie_2D::compute_area() {
    area = pi * radius * radius;  // ���n����
    return area;
}

// -------------------------
// 3D ��W�����O�GCylinder_3D
// �~�Ӧ� Pie_2D�]�����~�� Circ_1D�^
// -------------------------
Cylinder_3D::Cylinder_3D(double r, double h)
    : Pie_2D(r), height(h), volume(0.0), surface(0.0) {}  // ��l�ư��B��n�B���n

double Cylinder_3D::compute_volume() {
    volume = pi * radius * radius * height;  // ��n����
    return volume;
}

double Cylinder_3D::compute_surface() {
    surface = 2 * pi * radius * (radius + height);  // ���n����
    return surface;
}

// -------------------------
// �������O�GCastle
// �P���~�� Cron_3D + Cylinder_3D�]�h���~�ӡ^
// -------------------------
Castle::Castle(double r1, double h1, double r2, double h2)
    : Cron_3D(r1, h1), Cylinder_3D(r2, h2) {}  // ��l�ƤW�h���@�P�U�h��W

double Castle::compute_volume() {
    return Cron_3D::compute_volume() + Cylinder_3D::compute_volume();  // �X����n
}

double Castle::compute_height() {
    return Cron_3D::height + Cylinder_3D::height;  // �X���`����
}
