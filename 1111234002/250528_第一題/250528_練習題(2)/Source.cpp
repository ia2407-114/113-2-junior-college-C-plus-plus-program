#include <iostream>
using namespace std ;
#include"Matrix.h"
/*題目1: 練習此一程式碼，並修改二元運算子*=、+=、-=、%=分別計算矩陣根據另一個矩陣對應元素進行"遞乘"、"遞加"、"遞減"等運算，並印出改變前與改變後的結果。
以"遞乘"為例:

a=[1 2 3]
  [4 5 6]
b=[2 3 4]
  [5 6 7]
a*=b= [2  6  12]
      [20 30 42]*/

void printMatrix(const Matrix& m, int row, int column, const string& title) {
    cout << title << endl;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j)
            cout << m.element[i][j] << '\t';
        cout << endl;
    }
}

int main() {
    int i, j, row, column;
    cout << "重新定義「*=、+=、-=、%=」運算子多載\n";
    cout << "輸入矩陣A及B的列數(row):";
    cin >> row;
    cout << "輸入矩陣A及B的行數(column):";
    cin >> column;

    // 測試 *=
    {
        Matrix a('A', row, column);
        Matrix b('B', row, column);
        printMatrix(a, row, column, "矩陣A 原始");
        printMatrix(b, row, column, "矩陣B 原始");
        a *= b;
        printMatrix(a, row, column, "矩陣A *= 矩陣B\n");
    }

    // 測試 +=
    {
        Matrix a('A', row, column);
        Matrix b('B', row, column);
        a += b;
        printMatrix(a, row, column, "矩陣A += 矩陣B\n");
    }

    // 測試 -=
    {
        Matrix a('A', row, column);
        Matrix b('B', row, column);
        a -= b;
        printMatrix(a, row, column, "矩陣A -= 矩陣B\n");
    }

    // 測試 %=
    {
        Matrix a('A', row, column);
        Matrix b('B', row, column);
        a %= b;
        printMatrix(a, row, column, "矩陣A %= 矩陣B\n");
    }

    return 0;
}
