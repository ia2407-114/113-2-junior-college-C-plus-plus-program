#include <iostream>
#include "geometry.h"
using namespace std;

Circ_1D::Circ_1D() {
	cout << "\n請輸入半徑(R)：";
	cin >> radius;

	Circumference = compute_circ();
}
double Circ_1D::compute_circ() {
	return 2 * radius * pi;
}

Cron_3D::Cron_3D() {
	cout << "\n請輸入圓錐體(甜筒)的高(H)：";
	cin >> this->height;

	volume = compute_volume();
	display();
}
double Cron_3D::compute_volume() {
	return radius * radius * pi * this->height / 3;
}
void Cron_3D::display() {
	cout << "圓錐體(甜筒)的體積為：" << volume << endl;
}

Pie_2D::Pie_2D() {
	area = compute_area();

	display();
}
double Pie_2D::compute_area() {
	return radius * radius * pi;
}
void Pie_2D::display() {
	cout << "圓餅的面積為：" << area << endl;
}

Cylinder_3D::Cylinder_3D() {
	cout << "\n請輸入圓柱體的高(H)：";
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
	cout << "圓柱體的體積為：" << volume << endl;
	cout << "圓柱體的surface為：" << surface << endl;

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
	cout << "\n城樓的高為：" << height << endl;
	cout << "城樓的體積為：" << volume << endl;
}