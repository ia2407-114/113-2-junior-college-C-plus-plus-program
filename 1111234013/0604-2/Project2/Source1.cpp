#include <iostream>
#include"sq.h"
using namespace std;
square_2D:: square_2D() {
    cout << "�إ� 2D �����\n";
    cout << "�п�J��: ";
    cin >> length;
    cout << "�п�J�e: ";
    cin >> width;
}

// �Ѻc�l
square_2D::~square_2D() {
    cout << "�P�� 2D �����\n";
}


void square_2D::print_2D() {
    cout << "\n2D �����\n";
    cout << "��: " << length << "\n";
    cout << "�e: " << width << "\n";
    cout << "���n: " << length * width << "\n";
}
rect_3D:: rect_3D() {
    cout << "\n�إ� 3D ������\n";
    cout << "�п�J��: ";
    cin >> height;
}

// �Ѻc�l
rect_3D::~rect_3D() {
    cout << "�P�� 3D ������\n";
}

// �L�X 3D �����骺���
void rect_3D::print_3D() {
    cout << "\n3D ������\n";
    cout << "��: " << length << "\n";
    cout << "�e: " << width << "\n";
    cout << "��: " << height << "\n";
    cout << "��n: " << length * width * height << "\n";
}