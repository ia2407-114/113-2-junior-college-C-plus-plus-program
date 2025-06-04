#include <iostream>
#include"sq.h"
using namespace std;
square_2D:: square_2D() {
    cout << "建立 2D 長方形\n";
    cout << "請輸入長: ";
    cin >> length;
    cout << "請輸入寬: ";
    cin >> width;
}

// 解構子
square_2D::~square_2D() {
    cout << "銷毀 2D 長方形\n";
}


void square_2D::print_2D() {
    cout << "\n2D 長方形\n";
    cout << "長: " << length << "\n";
    cout << "寬: " << width << "\n";
    cout << "面積: " << length * width << "\n";
}
rect_3D:: rect_3D() {
    cout << "\n建立 3D 長方體\n";
    cout << "請輸入高: ";
    cin >> height;
}

// 解構子
rect_3D::~rect_3D() {
    cout << "銷毀 3D 長方體\n";
}

// 印出 3D 長方體的資料
void rect_3D::print_3D() {
    cout << "\n3D 長方體\n";
    cout << "長: " << length << "\n";
    cout << "寬: " << width << "\n";
    cout << "高: " << height << "\n";
    cout << "體積: " << length * width * height << "\n";
}