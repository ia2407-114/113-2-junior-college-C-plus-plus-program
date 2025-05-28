#include <iostream>
#include "Matrix.h"
using namespace std;

int main()
{
    int row, column;
    cout << "��J�x�}A��B���C��(row):";
    cin >> row;
    cout << "��J�x�}A��B�����(column):";
    cin >> column;

    Matrix a('A', row, column);
    Matrix b('B', row, column);

    cout << "\n�i��l�x�}�j\n";
    a.print("A");
    b.print("B");

    // ����
    Matrix a1 = a;
    a1 *= b;
    cout << "\nA *= B:\n";
    a1.print("A");

    // ���[
    Matrix a2 = a;
    a2 += b;
    cout << "\nA += B:\n";
    a2.print("A");

    // ����
    Matrix a3 = a;
    a3 -= b;
    cout << "\nA -= B:\n";
    a3.print("A");

    // �l��
    Matrix a4 = a;
    a4 %= b;
    cout << "\nA %= B:\n";
    a4.print("A");

    return 0;
}
