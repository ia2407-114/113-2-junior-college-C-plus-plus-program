#include "rect_3D.h"

rect_3D::rect_3D() {
    cout << "\n����l���O rect_3D ���غc���禡\n";
    cout << "��J����: "; cin >> height;
}

rect_3D::~rect_3D() {
    cout << "����l���O rect_3D ���Ѻc���禡.\n";
}

void rect_3D::print_3D() {
    print_2D(); // �I�s�����O�� print_2D ��k
    cout << "����: " << height << endl;
    cout << "��n: " << length * width * height << endl;
}
