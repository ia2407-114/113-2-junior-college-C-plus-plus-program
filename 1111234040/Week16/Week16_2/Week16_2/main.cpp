// main.cpp
#include <iostream>
#include "shape.h"
using namespace std;

int main() {
    cout << "--- 建立並顯示長方形物件 ---\n";
    square_2D sq;
    sq.print_2D();

    cout << "\n--- 建立並顯示長方體物件 ---\n";
    rect_3D rect;
    rect.print_3D();

    return 0;
}

