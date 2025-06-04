#include <iostream>
#include "square_2D.h"
using namespace std;

square_2D::square_2D() {
    cout << "請輸入長方形的長與寬:\n長: ";
    cin >> length;
    cout << "寬: ";
    cin >> width;
}

square_2D::~square_2D() {
    cout << "執行 square_2D 解構元\n";
}

void square_2D::print_2D() {
    cout << "長: " << length << ", 寬: " << width << endl;
    cout << "面積: " << length * width << endl;
}

// rect_3D 建構子
rect_3D::rect_3D() {
    cout << "請輸入長方體的高度: ";
    cin >> height;
}

rect_3D::~rect_3D() {
    cout << "執行 rect_3D 解構元\n";
}

void rect_3D::print_3D() {
    cout << "長: " << length << ", 寬: " << width << ", 高: " << height << endl;
    cout << "體積: " << length * width * height << endl;
}
