#include <iostream>
#include <string>
#include "Header.h"
using namespace std;

circ_1D::circ_1D(){
	cout << "輸入半徑: ";
	cin >> radius;
}
void circ_1D::compute_circ(){
	cout << "圓周長: " << radius * 2 * pi;
}

pie_2D::pie_2D() {
	area = radius * radius * pi;
}
void pie_2D::compute_area() {
	cout << "園面積: " << area;
}

cone_3D::cone_3D() {
	cout << "輸入高: ";
	cin >> height;
	volume = height * radius * radius * pi / 3;
}
void cone_3D::compute_volume() {
	cout << "錐體體積: " << volume;
}

/*cylinder_3D::cylinder_3D() {
	cout << "輸入高: ";
	cin >> height;
}
void cylinder_3D::compute_volume() {
	cout << "柱體體積: " << height * circ_1D::radius * circ_1D::radius * circ_1D::pi;
}
*/