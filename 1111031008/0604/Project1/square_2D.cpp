#include <iostream>
#include "square_2D.h"
using namespace std;

square_2D::square_2D() {
    cout << "�п�J����Ϊ����P�e:\n��: ";
    cin >> length;
    cout << "�e: ";
    cin >> width;
}

square_2D::~square_2D() {
    cout << "���� square_2D �Ѻc��\n";
}

void square_2D::print_2D() {
    cout << "��: " << length << ", �e: " << width << endl;
    cout << "���n: " << length * width << endl;
}

// rect_3D �غc�l
rect_3D::rect_3D() {
    cout << "�п�J�����骺����: ";
    cin >> height;
}

rect_3D::~rect_3D() {
    cout << "���� rect_3D �Ѻc��\n";
}

void rect_3D::print_3D() {
    cout << "��: " << length << ", �e: " << width << ", ��: " << height << endl;
    cout << "��n: " << length * width * height << endl;
}
