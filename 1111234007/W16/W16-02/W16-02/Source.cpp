#include <iostream>
#include "square_2d.h"
#include "rect_3d.h"

int main() {
    Square_2D square(8.0, 3.0);
    Rect_3D rect(5.0, 3.0, 2.0);

    std::cout << "Square_2D :" << std::endl;
    square.print_2D();

    std::cout << "Rect_3D : " << std::endl;
    rect.print_3D();

    return 0;
}