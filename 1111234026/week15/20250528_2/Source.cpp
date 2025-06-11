#include <iostream>
#include "Matrix.h"

int main() {
    int row, column;

    cout << "請輸入矩陣 A 與 B 的列數與行數：\n";
    cout << "列數：";
    cin >> row;
    cout << "行數：";
    cin >> column;

    Matrix a('A', row, column);
    Matrix b('B', row, column);

    Matrix a1 = a;  // 用於 *=
    Matrix a2 = a;  // 用於 +=
    Matrix a3 = a;  // 用於 -=
    Matrix a4 = a;  // 用於 %=

    a.print("a 原始內容");
    b.print("b 原始內容");

    a1 *= b;
    a2 += b;
    a3 -= b;
    a4 %= b;

    a1.print("a *= b 的結果");
    a2.print("a += b 的結果");
    a3.print("a -= b 的結果");
    a4.print("a %= b 的結果");

    return 0;
}
