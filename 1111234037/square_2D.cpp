#include "square_2D.h"

square_2D::square_2D() {
    cout << "\n�����¦���O square_2D ���غc���禡\n";
    cout << "��J��: "; cin >> length;
    cout << "��J�e: "; cin >> width;
}

square_2D::~square_2D() {
    cout << "�����¦���O square_2D ���Ѻc���禡.\n";
}

void square_2D::print_2D() {
    cout << "\n����θ�ơG\n";
    cout << "��: " << length << endl;
    cout << "�e: " << width << endl;
    cout << "���n: " << length * width << endl;
}
