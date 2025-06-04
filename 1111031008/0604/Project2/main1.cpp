#include <iostream>
#include "square_2D.h"
using namespace std;

int main() {
    cout << "建立長方形:\n";
    square_2D sq;
    sq.print_2D();

    cout << "\n建立長方體:\n";
    rect_3D rect;
    rect.print_3D();

    return 0;
}
