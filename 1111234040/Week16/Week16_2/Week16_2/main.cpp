// main.cpp
#include <iostream>
#include "shape.h"
using namespace std;

int main() {
    cout << "--- �إߨ���ܪ���Ϊ��� ---\n";
    square_2D sq;
    sq.print_2D();

    cout << "\n--- �إߨ���ܪ����骫�� ---\n";
    rect_3D rect;
    rect.print_3D();

    return 0;
}

