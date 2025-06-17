#include <iostream>
#include "square.h"
using namespace std;

int main() {
    cout << "\n長方形\n";
    square_2D rect2D;
    rect2D.print_2D();

    cout << "\n長方體\n";
    rect_3D rect3D;
    rect3D.print_3D();

    return 0;
}
