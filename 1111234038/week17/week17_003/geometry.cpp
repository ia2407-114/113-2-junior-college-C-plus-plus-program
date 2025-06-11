#include <iostream>
#include "geometry.h"
using namespace std;

Circ_1D::Circ_1D() {
	cout << "\n�п�J�b�|(R)�G";
	cin >> radius;

	Circumference = compute_circ();
}
double Circ_1D::compute_circ() {
	return 2 * radius * pi;
}

Cron_3D::Cron_3D() {
	cout << "\n�п�J���@��(����)����(H)�G";
	cin >> this->height;

	volume = compute_volume();
	display();
}
double Cron_3D::compute_volume() {
	return radius * radius * pi * this->height / 3;
}
void Cron_3D::display() {
	cout << "���@��(����)����n���G" << volume << endl;
}

Pie_2D::Pie_2D() {
	area = compute_area();

	display();
}
double Pie_2D::compute_area() {
	return radius * radius * pi;
}
void Pie_2D::display() {
	cout << "��檺���n���G" << area << endl;
}

Cylinder_3D::Cylinder_3D() {
	cout << "\n�п�J��W�骺��(H)�G";
	cin >> height;

	volume = compute_volume();
	surface = compute_surface();

	display();
}
double Cylinder_3D::compute_volume() {
	return area * this->height;
}
double Cylinder_3D::compute_surface() {
	return Circumference * this->height;
}
void Cylinder_3D::display() {
	cout << "��W�骺��n���G" << volume << endl;
	cout << "��W�骺surface���G" << surface << endl;

}


Castle::Castle() {
	height = compute_height();
	volume = compute_volume();

	display();
}
double Castle::compute_volume() {
	return Cron_3D::volume + Cylinder_3D::volume;
}
double Castle::compute_height() {
	return this->height = Cron_3D::height + Cylinder_3D::height;
}
void Castle::display() {
	cout << "\n���Ӫ������G" << height << endl;
	cout << "���Ӫ���n���G" << volume << endl;
}