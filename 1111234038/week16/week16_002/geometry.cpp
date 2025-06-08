#include <iostream>
#include <string>
#include "geometry.h"
using namespace std;

square_2D::square_2D()
{
	//cout << "執行square_2D的建構元函式.\n";
	cout << "長:";
	cin >> length;
	cout << "寬:";
	cin >> width;
}

square_2D::~square_2D()
{
	cout << "執行square_2D的解構元函式.\n";
}

int square_2D::area_2D()
{
	return length * width;
}

void square_2D::print_2D()
{
	cout << "長:" << length << endl;
	cout << "寬:" << width << endl;
	cout << "長方形的面積:" << area_2D() << endl;
}

rect_3D::rect_3D()
{
	cout << "高:";
	cin >> height;
}

rect_3D::~rect_3D()
{
	cout << "執行rect_3D的解構元函式.\n";
}

void rect_3D::print_3D()
{
	cout << "長方體的面積:" << area_2D() * height << endl;
}