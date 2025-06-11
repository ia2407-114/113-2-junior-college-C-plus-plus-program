
#include <iostream>
#include <string>
#include"n.h"
using namespace std; 
// --- Circ_1D ---
Circ_1D::Circ_1D() {
    cout << "�п�J�ꪺ�b�|: ";
    cin >> radius;
}

double Circ_1D::getRadius() const {
    return radius;
}

// --- Cron_3D (����) ---
Cron_3D::Cron_3D() : Circ_1D() {
    cout << "�п�J��������: ";
    cin >> height;
}

void Cron_3D::compute_volume() {
    volume = (1.0 / 3) * pi * radius * radius * height;
}

double Cron_3D::getVolume() const {
    return volume;
}

double Cron_3D::getHeight() const {
    return height;
}

// --- Pie_2D ---
Pie_2D::Pie_2D() {
    area = 0;
}

void Pie_2D::compute_area(double r) {
    area = 3.14 * r * r;
}

double Pie_2D::getArea() const {
    return area;
}

// --- Cylinder_3D (��W) ---
Cylinder_3D::Cylinder_3D() {
    cout << "�п�J��W�骺��: ";
    cin >> height;
}

void Cylinder_3D::compute_volume(double r) {
    compute_area(r); // ��n
    volume = area * height;
}

void Cylinder_3D::compute_surface(double r) {
    surface = 2 * 3.14 * r * height;
}

double Cylinder_3D::getVolume() const {
    return volume;
}

double Cylinder_3D::getSurface() const {
    return surface;
}

double Cylinder_3D::getHeight() const {
    return height;
}


Castle::Castle() : Cron_3D(), Cylinder_3D() {}

void Castle::compute_volume() {
    double r = Cron_3D::getRadius(); 

    Cron_3D::compute_volume();
    Cylinder_3D::compute_volume(r);
    Cylinder_3D::compute_surface(r);

    cout << "\n������n��: " << Cron_3D::getVolume() << endl;
    cout << "��W����n��: " << Cylinder_3D::getVolume() << endl;
    cout << "��W����n��: " << Cylinder_3D::getSurface() << endl;

    double total = Cron_3D::getVolume() + Cylinder_3D::getVolume();
    cout << "������n��: " << total << endl;
}

void Castle::compute_height() {
    double h1 = Cron_3D::getHeight();
    double h2 = Cylinder_3D::getHeight();
    cout << "�����`���׬�: " << (h1 + h2) << endl;
}
