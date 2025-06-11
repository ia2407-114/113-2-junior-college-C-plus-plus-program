#include <iostream>
#include <string>
using namespace std;
// 飛行物體類別 
#include "cone.h"

//-----------------------------------

Circ_1D::Circ_1D()
{
	cout << "輸入圓周長半徑:\n";
	cin >> radius;
}

void Circ_1D::compute_circ()
{
	cout << "\n圓周長:" << (2 * radius) * Circ_1D::pi << endl;
}

//-----------------------------------

Cron_3D::Cron_3D()
{
	cout << "輸入甜筒老高:";
	cin >> height_Cr;
}

void Cron_3D::compute_volume() 
{
	cout << "\n甜筒體積:" << (1.0 / 3.0)  * 3.14 * (Circ_1D::radius * Circ_1D::radius ) * height_Cr << endl;
}

//-----------------------------------

void Pie_2D::compute_area()
{
	cout << "圓餅面積:" << Circ_1D::radius * Circ_1D::radius * Circ_1D::pi << endl;
}

//-----------------------------------
Cylinder_3D::Cylinder_3D()
{
	cout << "輸入圓柱體老高:";
	cin >> height_Cy;
}

void Cylinder_3D::compute_volume()
{
	cout << "圓柱體體積:" << (Circ_1D::radius * Circ_1D::radius * Circ_1D::pi) * height_Cy << endl;
	volume_Cy = (Circ_1D::radius * Circ_1D::radius * Circ_1D::pi) * height_Cy;
}

void Cylinder_3D::compute_surface()
{
	cout << "圓柱體表面積:" << (2 * Circ_1D::radius * Circ_1D::pi) * height_Cy + 2 * (Circ_1D::radius * Circ_1D::radius * Circ_1D::pi) << endl;
}

//-----------------------------------

void Castle::compute_volume()
{
	cout << "\n城樓體積:" << (Circ_1D::radius * Circ_1D::radius * 3.14) * height_Cy + (1 / 3) * (Circ_1D::radius * Circ_1D::radius * 3.14) * height_Cr;
}

void Castle::compute_height()
{
	cout << "\n城樓老高度:" << height_Cr + height_Cy;
}