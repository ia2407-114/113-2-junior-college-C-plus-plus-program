// shape.cpp
#include <iostream>
#include "shape.h"
using namespace std;

// square_2D 方法實作
square_2D::square_2D() {
    cout << "建立長方形(square_2D):\n";
    cout << "請輸入長: ";
    cin >> length;
    cout << "請輸入寬: ";
    cin >> width;
}

square_2D::~square_2D() {
    cout << "銷毀 square_2D 物件\n";
}

void square_2D::print_2D() const {
    cout << "長: " << length << ", 寬: " << width
        << ", 面積: " << length * width << endl;
}

// rect_3D 方法實作
rect_3D::rect_3D() {
    cout << "建立長方體(rect_3D):\n";
    cout << "請輸入長: ";
    cin >> length;
    cout << "請輸入寬: ";
    cin >> width;
    cout << "請輸入高: ";
    cin >> height;
}

rect_3D::~rect_3D() {
    cout << "銷毀 rect_3D 物件\n";
}

void rect_3D::print_3D() const {
    cout << "長: " << length << ", 寬: " << width
        << ", 高: " << height
        << ", 體積: " << length * width * height << endl;
}
