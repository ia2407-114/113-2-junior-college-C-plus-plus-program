#include <iostream>
#include "Matrix.h"
using namespace std;

int main() {

    double x, y;

    cout << "��J�Ĥ@�Ӯy���I p1(x y): ";
    cin >> x >> y;
    Matrix p1 = Matrix(x, y);

    cout << "��J�ĤG�Ӯy���I p2(x y): ";
    cin >> x >> y;
    Matrix p2 = Matrix(x, y);

    double da = p1 - p2;

    cout << "���I�������Z����: " << da << endl;

    return 0;
}