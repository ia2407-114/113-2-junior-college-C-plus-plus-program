#include <iostream>
#include <string>
using namespace std;
// ���檫�����O 
#include "cone.h"

//-----------------------------------

Circ_1D::Circ_1D()
{
	cout << "��J��P���b�|:\n";
	cin >> radius;
}

void Circ_1D::compute_circ()
{
	cout << "\n��P��:" << (2 * radius) * Circ_1D::pi << endl;
}

//-----------------------------------

Cron_3D::Cron_3D()
{
	cout << "��J�����Ѱ�:";
	cin >> height_Cr;
}

void Cron_3D::compute_volume() 
{
	cout << "\n������n:" << (1.0 / 3.0)  * 3.14 * (Circ_1D::radius * Circ_1D::radius ) * height_Cr << endl;
}

//-----------------------------------

void Pie_2D::compute_area()
{
	cout << "��歱�n:" << Circ_1D::radius * Circ_1D::radius * Circ_1D::pi << endl;
}

//-----------------------------------
Cylinder_3D::Cylinder_3D()
{
	cout << "��J��W��Ѱ�:";
	cin >> height_Cy;
}

void Cylinder_3D::compute_volume()
{
	cout << "��W����n:" << (Circ_1D::radius * Circ_1D::radius * Circ_1D::pi) * height_Cy << endl;
	volume_Cy = (Circ_1D::radius * Circ_1D::radius * Circ_1D::pi) * height_Cy;
}

void Cylinder_3D::compute_surface()
{
	cout << "��W����n:" << (2 * Circ_1D::radius * Circ_1D::pi) * height_Cy + 2 * (Circ_1D::radius * Circ_1D::radius * Circ_1D::pi) << endl;
}

//-----------------------------------

void Castle::compute_volume()
{
	cout << "\n������n:" << (Circ_1D::radius * Circ_1D::radius * 3.14) * height_Cy + (1 / 3) * (Circ_1D::radius * Circ_1D::radius * 3.14) * height_Cr;
}

void Castle::compute_height()
{
	cout << "\n���ӦѰ���:" << height_Cr + height_Cy;
}