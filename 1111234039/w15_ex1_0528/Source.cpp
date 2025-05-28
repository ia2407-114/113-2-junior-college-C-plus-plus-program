#include <iostream>
#include "Matrix.h"
using namespace std;

int main()
{
    int row, column;
    cout << "輸入矩陣A及B的列數(row):";
    cin >> row;
    cout << "輸入矩陣A及B的行數(column):";
    cin >> column;

    Matrix a('A', row, column);
    Matrix b('B', row, column);

    cout << "\n【原始矩陣】\n";
    a.print("A");
    b.print("B");

    // 遞乘
    Matrix a1 = a;
    a1 *= b;
    cout << "\nA *= B:\n";
    a1.print("A");

    // 遞加
    Matrix a2 = a;
    a2 += b;
    cout << "\nA += B:\n";
    a2.print("A");

    // 遞減
    Matrix a3 = a;
    a3 -= b;
    cout << "\nA -= B:\n";
    a3.print("A");

    // 餘數
    Matrix a4 = a;
    a4 %= b;
    cout << "\nA %= B:\n";
    a4.print("A");

    return 0;
}
