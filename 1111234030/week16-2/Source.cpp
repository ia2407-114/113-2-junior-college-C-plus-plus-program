#include <iostream>
#include "Header.h"
using namespace std;

int main() {
    double a, b,c,d,e;
    cout << "輸入長寬";
    cin >> a >> b;
    square_2D rect2D(a,b );
    rect2D.print_2D();

    cout << "-----------------------" << endl;

    cout << "輸入長寬高";
    cin >> c >> d >> e;
    rect_3D rect3D(c, d, e);
    rect3D.print_3D();

    return 0;
}
