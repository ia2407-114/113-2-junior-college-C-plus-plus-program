#include <iostream>
#include <cmath> // �ޤJ�ƾǨ禡�w
using namespace std;

class Point {
public:
    double x, y;

    Point(double x_val, double y_val) : x(x_val), y(y_val) {}

    // �w�q '-' �B��l�ӭp����I�������Z��
    double operator-(const Point& other) const {
        return sqrt(pow(other.x - x, 2) + pow(other.y - y, 2));
    }
};

int main() {
    double x1, y1, x2, y2;
    cout << "��J�Ĥ@���I���y�� (x1, y1): ";
    cin >> x1 >> y1;
    cout << "��J�ĤG���I���y�� (x2, y2): ";
    cin >> x2 >> y2;

    Point p1(x1, y1);
    Point p2(x2, y2);

    double distance = p1 - p2; // �p��Z��
    cout << "���I�������Z����: " << distance << endl;

    return 0;
}
