#include <iostream>
#include <string>
#include "geometry.h"
using namespace std;

square_2D::square_2D()
{
	//cout << "����square_2D���غc���禡.\n";
	cout << "��:";
	cin >> length;
	cout << "�e:";
	cin >> width;
}

square_2D::~square_2D()
{
	cout << "����square_2D���Ѻc���禡.\n";
}

int square_2D::area_2D()
{
	return length * width;
}

void square_2D::print_2D()
{
	cout << "��:" << length << endl;
	cout << "�e:" << width << endl;
	cout << "����Ϊ����n:" << area_2D() << endl;
}

rect_3D::rect_3D()
{
	cout << "��:";
	cin >> height;
}

rect_3D::~rect_3D()
{
	cout << "����rect_3D���Ѻc���禡.\n";
}

void rect_3D::print_3D()
{
	cout << "�����骺���n:" << area_2D() * height << endl;
}