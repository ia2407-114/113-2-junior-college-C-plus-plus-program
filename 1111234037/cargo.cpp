#include "cargo.h"

cargo::cargo() {
    cout << "\n����l���O cargo ���غc���禡\n";
    cout << "�ӯ����q: "; cin >> company;
    cout << "�̤j�����q(����): "; cin >> max_capacity;
}

cargo::~cargo() {
    cout << "����l���O cargo ���Ѻc���禡.\n";
}

void cargo::display_cargo() {
    display(); // �I�s�����O display()
    cout << "�ӯ����q: " << company << endl;
    cout << "�̤j�����q(����): " << max_capacity << endl;
}
