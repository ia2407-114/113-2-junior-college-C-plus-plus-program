#include <iostream>
#include "Point.h"
using namespace std;

int main() {
    Point a, b;

    a.input('A');
    b.input('B');

    int c;

    a.print('A');
    b.print('B');

    c = a - b;

    cout << "���I�������Z����: " << c << endl;

    return 0;
}
