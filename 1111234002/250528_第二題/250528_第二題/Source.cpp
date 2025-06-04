#include <iostream>
#include"Matrix.h"
using namespace std;
/*題目2: 重新定義'-' 為計算距離的運算子，計算座標平面上的兩點(x1, y1)與(x2, y2) 之間的距離，距離公式請自行查詢*/
#include <iostream>
#include "Matrix.h" 
using namespace std;

int main() {
    double x1, y1, x2, y2;

    cout << "請輸入第一個點的座標 x1 y1: ";
    cin >> x1 >> y1;
    cout << "請輸入第二個點的座標 x2 y2: ";
    cin >> x2 >> y2;

    Point p1(x1, y1);
    Point p2(x2, y2);

    double distance = p1-p2;

    cout << "兩點之間的距離為: " << distance << endl;

    return 0;
}
