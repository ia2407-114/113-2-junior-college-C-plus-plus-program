#include <iostream>
#include "Matrix.h"

int main() {
    int row, column;

    cout << "�п�J�x�} A �P B ���C�ƻP��ơG\n";
    cout << "�C�ơG";
    cin >> row;
    cout << "��ơG";
    cin >> column;

    Matrix a('A', row, column);
    Matrix b('B', row, column);

    Matrix a1 = a;  // �Ω� *=
    Matrix a2 = a;  // �Ω� +=
    Matrix a3 = a;  // �Ω� -=
    Matrix a4 = a;  // �Ω� %=

    a.print("a ��l���e");
    b.print("b ��l���e");

    a1 *= b;
    a2 += b;
    a3 -= b;
    a4 %= b;

    a1.print("a *= b �����G");
    a2.print("a += b �����G");
    a3.print("a -= b �����G");
    a4.print("a %= b �����G");

    return 0;
}
