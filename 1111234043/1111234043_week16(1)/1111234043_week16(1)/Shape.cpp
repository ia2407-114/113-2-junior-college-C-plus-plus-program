#include "Shape.h"

// square_2D �غc�l
square_2D::square_2D() {
    cout << "�إ� square_2D�]����Ρ^����\n";
    cout << "��J��: ";
    cin >> length;
    cout << "��J�e: ";
    cin >> width;
}

// square_2D �Ѻc�l
square_2D::~square_2D() {
    cout << "�P�� square_2D�]����Ρ^����\n";
}

// �L�X���B�e�B���n
void square_2D::print_2D() {
    cout << "\n[����θ�T]\n";
    cout << "��: " << length << endl;
    cout << "�e: " << width << endl;
    cout << "���n: " << length * width << endl;
}

// rect_3D �غc�l
rect_3D::rect_3D() {
    cout << "\n�إ� rect_3D�]������^����\n";
    cout << "��J����: ";
    cin >> height;
}

// rect_3D �Ѻc�l
rect_3D::~rect_3D() {
    cout << "�P�� rect_3D�]������^����\n";
}

// �L�X���B�e�B���B��n
void rect_3D::print_3D() {
    cout << "\n[�������T]\n";
    cout << "��: " << length << endl;
    cout << "�e: " << width << endl;
    cout << "��: " << height << endl;
    cout << "��n: " << length * width * height << endl;
}
