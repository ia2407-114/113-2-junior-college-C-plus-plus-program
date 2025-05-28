/* 題目1: 練習此一程式碼，並修改二元運算子*=、+=、-=、%=分別計算矩陣，
根據另一個矩陣對應元素進行"遞乘"、"遞加"、"遞減"等運算，並印出改變前與改變後的結果。
以"遞乘"為例:
a=[1 2 3]
  [4 5 6]
b=[2 3 4]
  [5 6 7]
a*=b= [2  6  12]
      [20 30 42]*/

#include <iostream>
#include "Matrix.h"
using namespace std;

int main()
{
    int row, column;

    // 輸入矩陣的列(row)與行(column)數
    cout << "輸入矩陣A及B的列數(row):";
    cin >> row;
    cout << "輸入矩陣A及B的行數(column):";
    cin >> column;

    // 建立兩個矩陣 a 和 b，並由使用者輸入元素
    Matrix a('A', row, column);
    Matrix b('B', row, column);

    
    cout << "\n【原始矩陣】\n";
    a.print("A"); // 印出矩陣 A
    b.print("B"); // 印出矩陣 B

    // ----------- 執行四種遞迴運算子多載 -----------

    // 遞乘
    Matrix a1 = a;     // 複製 A 為 a1，保留原始 A
    a1 *= b;           // 對應元素相乘後存回 a1
    cout << "\nA *= B:\n";
    a1.print("A");     // 印出結果矩陣 A

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
