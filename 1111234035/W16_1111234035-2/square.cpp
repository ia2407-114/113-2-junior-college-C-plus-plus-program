#include <iostream>
#include <string>
#include "square.h"
using namespace std;

//square_2D
square_2D::square_2D(){
	cout << "��J�@����Τ����B�e" << endl;
	cin >> length >> width;
}

square_2D::~square_2D() {
	cout << "����squard_2D���Ѻc�l" << endl;
}

double square_2D::compute_area() {
	return length*width;
}

void square_2D::print_2D() {
	cout << "�A������Ϊ���:" << length << endl;
	cout << "�A������μe��:" << width << endl;
	cout << "�A������έ��n��:" << compute_area() << endl;
}

//rect_3D
rect_3D::rect_3D() {
	cout << "��J�����骺��" << endl;
	cin >> height;
}

rect_3D::~rect_3D() {
	cout << "����rect_3D���Ѻc�l" << endl;
}

double rect_3D::compute_volume(){
	return compute_area() * height;
}

void rect_3D::print_3D() {
	square_2D::print_2D();
	cout << "�A�������鰪��:" << height << endl;
	cout << "�A����������n��:" << compute_volume() << endl;
}