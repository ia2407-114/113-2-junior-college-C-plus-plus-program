#include <iostream>
#include "Square2D.h"
#include "Rect3D.h"

int main() {
    Square_2D square(2, 6);
    Rect_3D rect(5, 3, 8);

    std::cout << "�����:" << std::endl;
    square.print_2D();

    std::cout << "������: " << std::endl;
    rect.print_3D();

    return 0;
}