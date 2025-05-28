#include <iostream>
#include <cmath> // 引入數學函式庫
using namespace std;

class Point {
public:
    double x, y;

    Point(double x_val, double y_val) : x(x_val), y(y_val) {}

    // 定義 '-' 運算子來計算兩點之間的距離
    double operator-(const Point& other) const {
        return sqrt(pow(other.x - x, 2) + pow(other.y - y, 2));
    }
};

int main() {
    double x1, y1, x2, y2;
    cout << "輸入第一個點的座標 (x1, y1): ";
    cin >> x1 >> y1;
    cout << "輸入第二個點的座標 (x2, y2): ";
    cin >> x2 >> y2;

    Point p1(x1, y1);
    Point p2(x2, y2);

    double distance = p1 - p2; // 計算距離
    cout << "兩點之間的距離為: " << distance << endl;

    return 0;
}
