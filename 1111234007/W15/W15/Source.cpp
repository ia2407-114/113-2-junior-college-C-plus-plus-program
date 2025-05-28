//題目1: 練習此一程式碼，並修改二元運算子 *= 、 += 、 -= 、 %= 分別計算矩陣根據另一個矩陣對應元素進行"遞乘"、"遞加"、"遞減"等運算，並印出改變前與改變後的結果。
//以"遞乘"為例 :
 //   a = [1 2 3]
 //   [4 5 6]
//b = [2 3 4]
//[5 6 7]
//a *= b = [2  6  12]
//[20 30 42]
#include <iostream>
#include "Matrix.h"
using namespace std;

int main() {
    int i, j, row, column;
    cout << "重新定義「+=、-=、*=、%=」(加號)運算子多載，使其能應用在矩陣加法上\n";
    cout << "輸入矩陣A及B的列數(row):";
    cin >> row;
    cout << "輸入矩陣A及B的行數(column):";
    cin >> column;

    Matrix a('A', row, column);
    Matrix b('B', row, column);
    Matrix c(row, column);

    a += b;
    cout << "矩陣A += 矩陣B \n";
    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++)
            cout << a.element[i][j] << '\t';
        cout << endl;
    }

    a -= b;
    cout << "矩陣A -= 矩陣B  \n";
    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++)
            cout << a.element[i][j] << '\t';
        cout << endl;
    }

    a *= b;
    cout << "矩陣A *= 矩陣B  \n";
    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++)
            cout << a.element[i][j] << '\t';
        cout << endl;
    }

    a %= b;
    cout << "矩陣A %= 矩陣B  \n";
    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++)
            cout << a.element[i][j] << '\t';
        cout << endl;
    }

    return 0;
}
