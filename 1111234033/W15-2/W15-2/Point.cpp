#include <iostream>
#include "Point.h"
using namespace std;

int main() {

    double x, y;

    cout << "輸入第一個座標點 p1(x y): ";
    cin >> x >> y;
    Point p1 = Point(x, y);

    cout << "輸入第二個座標點 p2(x y): ";
    cin >> x >> y;
    Point p2 = Point(x, y);

    double da = p1 - p2;

    cout << "兩點之間的距離為: " << da << endl;

    return 0;
}