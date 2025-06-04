#include <iostream>
#include <string>
#include "square.h"
using namespace std;

//square_2D
square_2D::square_2D(){
	cout << "輸入一長方形之長、寬" << endl;
	cin >> length >> width;
}

square_2D::~square_2D() {
	cout << "執行squard_2D之解構子" << endl;
}

double square_2D::compute_area() {
	return length*width;
}

void square_2D::print_2D() {
	cout << "你的長方形長為:" << length << endl;
	cout << "你的長方形寬為:" << width << endl;
	cout << "你的長方形面積為:" << compute_area() << endl;
}

//rect_3D
rect_3D::rect_3D() {
	cout << "輸入長方體的高" << endl;
	cin >> height;
}

rect_3D::~rect_3D() {
	cout << "執行rect_3D之解構子" << endl;
}

double rect_3D::compute_volume(){
	return compute_area() * height;
}

void rect_3D::print_3D() {
	square_2D::print_2D();
	cout << "你的長方體高為:" << height << endl;
	cout << "你的長方體體積為:" << compute_volume() << endl;
}