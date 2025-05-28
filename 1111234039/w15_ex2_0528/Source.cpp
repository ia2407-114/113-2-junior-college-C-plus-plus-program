#include <iostream>
#include "Point.h"
using namespace std;

int main() {
    double x1, y1, x2, y2;
    cout << "輸入第一個點的座標 (x1 y1): ";
    cin >> x1 >> y1;

    cout << "輸入第二個點的座標 (x2 y2): ";
    cin >> x2 >> y2;

    Point p1(x1, y1), p2(x2, y2);
    double distance = p1 - p2;

    cout << "兩點之間的距離為: " << distance << endl;
    return 0;
}
