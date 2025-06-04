#include"H.h"


s::s() {
	cout << "輸入長與寬: ";
	cin >> l >> w;
}
double s::compute_area() {
	return l * w;
}
double s::print2D()
{
	return compute_area();
}

s::~s() {
	cout << "\n\n2D面積為: " << print2D();
}


r::r(float a)
{
	h = a;
}
double r::compute_vol() 
{
	return this->compute_area()* h;
}
double r::print3D() {

	return compute_vol();
}
r::~r() {
	cout << "\n\n3D體積為: " << print3D();
}