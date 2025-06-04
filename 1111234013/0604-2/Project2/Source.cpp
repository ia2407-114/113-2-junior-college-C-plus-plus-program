#include <iostream>
#include"sq.h"
using namespace std;




int main() {
    cout << "=== 建立一個 2D 長方形 ===\n";
    square_2D s2d;
    s2d.print_2D();

    cout << "\n=== 建立一個 3D 長方體 ===\n";
    rect_3D r3d;
    r3d.print_3D();

    return 0;
}
