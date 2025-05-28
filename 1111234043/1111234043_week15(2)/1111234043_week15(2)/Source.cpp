#include <iostream>
#include <cmath>    // �ޤJ sqrt, pow
using namespace std;

// �w�q�G�������W���I
class Point {
public:
    double x, y;

    Point(double _x = 0, double _y = 0) : x(_x), y(_y) {}

    // �����G�� '-'�A�^�� this �I�P p �������Z��
    double operator-(const Point& p) const {
        return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));
    }
};

int main() {
    Point p1, p2;
    // ��J����I���y��
    cout << "��J�Ĥ@���I (x1 y1)�G";
    cin >> p1.x >> p1.y;
    cout << "��J�ĤG���I (x2 y2)�G";
    cin >> p2.x >> p2.y;

    // �p��Z��
    double dist = p1 - p2;  // �I�s operator- 

    cout << "���I�������Z�����G " << dist << endl;
    return 0;
}
