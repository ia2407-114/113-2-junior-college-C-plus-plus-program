#include <iostream>
#include "Point.h"
using namespace std;

int main() {

    double x, y;

    cout << "��J�Ĥ@�Ӯy���I p1(x y): ";
    cin >> x >> y;
    Point p1 = Point(x, y);

    cout << "��J�ĤG�Ӯy���I p2(x y): ";
    cin >> x >> y;
    Point p2 = Point(x, y);

    double da = p1 - p2;

    cout << "���I�������Z����: " << da << endl;

    return 0;
}