#include <iostream>
#include "Header.h"
using namespace std;

square_2D::square_2D(double l, double w) : length(l), width(w) {
        cout << "square_2D 建構子被呼叫" << endl;
    }

   square_2D::~square_2D() {
        cout << "square_2D 解構子被呼叫" << endl;
    }

   void square_2D::print_2D() {
        cout << "長: " << length << ", 寬: " << width
            << ", 面積: " << length * width << endl;
    }

rect_3D::rect_3D(double l, double w, double h) : square_2D(l, w), height(h) {
        cout << "rect_3D 建構子被呼叫" << endl;
    }

    rect_3D::~rect_3D() {
        cout << "rect_3D 解構子被呼叫" << endl;
    }

    void rect_3D::print_3D() {
        cout << "長: " << length << ", 寬: " << width
            << ", 高: " << height
            << ", 體積: " << length * width * height << endl;
    }
