#include "square.h"


square_2D::square_2D() {
    cout << "�п�J���P�e: ";
    cin >> length >> width;
}

square_2D::~square_2D() {
    cout << "[square_2D �Ѻc�l] �w����귽�C\n";
}

void square_2D::print_2D() {
    cout << "\n--- ����� ---\n";
    cout << "��: " << length << endl;
    cout << "�e: " << width << endl;
    cout << "���n: " << length * width << endl;
}

// ===== rect_3D =====
rect_3D::rect_3D() {
    cout << "�п�J����: ";
    cin >> height;
}

rect_3D::~rect_3D() {
    cout << "[rect_3D �Ѻc�l] �w����귽�C\n";
}

void rect_3D::print_3D() {
    cout << "\n--- ������ ---\n";
    cout << "��: " << length << endl;
    cout << "�e: " << width << endl;
    cout << "��: " << height << endl;
    cout << "��n: " << length * width * height << endl;
}
