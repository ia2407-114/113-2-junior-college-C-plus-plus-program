#include <iostream>
#include <string>
#include "Header.h"
using namespace std;

circ_1D::circ_1D(){
	cout << "��J�b�|: ";
	cin >> radius;
}
void circ_1D::compute_circ(){
	cout << "��P��: " << radius * 2 * pi;
}

pie_2D::pie_2D() {
	area = radius * radius * pi;
}
void pie_2D::compute_area() {
	cout << "�魱�n: " << area;
}

cone_3D::cone_3D() {
	cout << "��J��: ";
	cin >> height;
	volume = height * radius * radius * pi / 3;
}
void cone_3D::compute_volume() {
	cout << "�@����n: " << volume;
}

/*cylinder_3D::cylinder_3D() {
	cout << "��J��: ";
	cin >> height;
}
void cylinder_3D::compute_volume() {
	cout << "�W����n: " << height * circ_1D::radius * circ_1D::radius * circ_1D::pi;
}
*/