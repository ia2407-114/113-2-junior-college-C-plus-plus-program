#include <iostream>
#include "Header.h"
using namespace std;

int main() {
    double a, b,c,d,e;
    cout << "��J���e";
    cin >> a >> b;
    square_2D rect2D(a,b );
    rect2D.print_2D();

    cout << "-----------------------" << endl;

    cout << "��J���e��";
    cin >> c >> d >> e;
    rect_3D rect3D(c, d, e);
    rect3D.print_3D();

    return 0;
}
