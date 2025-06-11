#include "circle.h"
using namespace std;

//*************************circ_1D*************************
circ_1D::circ_1D() {
	cout << "請輸入圓半徑" << endl;
	cin >> radius;
}

double circ_1D::compute_circ() {
	return radius * 2 * pi;
}

//*************************Pie_2D*************************
Pie_2D::Pie_2D() {

}

double Pie_2D::compute_area() {
	return radius * radius * pi;
}

//*************************cron_3D*************************
cron_3D::cron_3D() {
	cout << "請輸入圓錐高" << endl;
	cin >> height;
}

double cron_3D::compute_cron_volume() {
	volume = radius * radius * pi / 3 * height;
	return volume;
}

double cron_3D::get_cron_height() {
	return height;
}

//*************************Cylinder_3D*************************
Cylinder_3D::Cylinder_3D() {
	cout << "請輸入圓柱高" << endl;
	cin >> height;
}

double Cylinder_3D::compute_cylinder_volume() {
	volume = compute_area() * height;
	return volume;
}

double Cylinder_3D::compure_cylinder_surface() {
	surface = compute_circ() * height;
	return surface;
}

double Cylinder_3D::get_cylinder_height() {
	return height;
}

//*************************Castle_3D*************************
castle_3D::castle_3D() {

}
double castle_3D::compute_castle_volume() {
	volume = compute_cron_volume() + compute_cylinder_volume();
	return volume;
}
double castle_3D::compute_castle_height() {
	height = get_cron_height() + get_cylinder_height();
	return height;
}