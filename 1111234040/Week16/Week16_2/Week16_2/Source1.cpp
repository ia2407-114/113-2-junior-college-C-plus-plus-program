// shape.cpp
#include <iostream>
#include "shape.h"
using namespace std;

// square_2D ��k��@
square_2D::square_2D() {
    cout << "�إߪ����(square_2D):\n";
    cout << "�п�J��: ";
    cin >> length;
    cout << "�п�J�e: ";
    cin >> width;
}

square_2D::~square_2D() {
    cout << "�P�� square_2D ����\n";
}

void square_2D::print_2D() const {
    cout << "��: " << length << ", �e: " << width
        << ", ���n: " << length * width << endl;
}

// rect_3D ��k��@
rect_3D::rect_3D() {
    cout << "�إߪ�����(rect_3D):\n";
    cout << "�п�J��: ";
    cin >> length;
    cout << "�п�J�e: ";
    cin >> width;
    cout << "�п�J��: ";
    cin >> height;
}

rect_3D::~rect_3D() {
    cout << "�P�� rect_3D ����\n";
}

void rect_3D::print_3D() const {
    cout << "��: " << length << ", �e: " << width
        << ", ��: " << height
        << ", ��n: " << length * width * height << endl;
}
