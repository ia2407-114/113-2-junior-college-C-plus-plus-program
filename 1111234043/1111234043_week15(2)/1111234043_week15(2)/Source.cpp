#include <iostream>
#include <cmath>    // 引入 sqrt, pow
using namespace std;

// 定義二維平面上的點
class Point {
public:
    double x, y;

    Point(double _x = 0, double _y = 0) : x(_x), y(_y) {}

    // 重載二元 '-'，回傳 this 點與 p 之間的距離
    double operator-(const Point& p) const {
        return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));
    }
};

int main() {
    Point p1, p2;
    // 輸入兩個點的座標
    cout << "輸入第一個點 (x1 y1)：";
    cin >> p1.x >> p1.y;
    cout << "輸入第二個點 (x2 y2)：";
    cin >> p2.x >> p2.y;

    // 計算距離
    double dist = p1 - p2;  // 呼叫 operator- 

    cout << "兩點之間的距離為： " << dist << endl;
    return 0;
}
