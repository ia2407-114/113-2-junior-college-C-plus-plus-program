#include "Shape.h"

// square_2D 建構子
square_2D::square_2D() {
    cout << "建立 square_2D（長方形）物件\n";
    cout << "輸入長: ";
    cin >> length;
    cout << "輸入寬: ";
    cin >> width;
}

// square_2D 解構子
square_2D::~square_2D() {
    cout << "銷毀 square_2D（長方形）物件\n";
}

// 印出長、寬、面積
void square_2D::print_2D() {
    cout << "\n[長方形資訊]\n";
    cout << "長: " << length << endl;
    cout << "寬: " << width << endl;
    cout << "面積: " << length * width << endl;
}

// rect_3D 建構子
rect_3D::rect_3D() {
    cout << "\n建立 rect_3D（長方體）物件\n";
    cout << "輸入高度: ";
    cin >> height;
}

// rect_3D 解構子
rect_3D::~rect_3D() {
    cout << "銷毀 rect_3D（長方體）物件\n";
}

// 印出長、寬、高、體積
void rect_3D::print_3D() {
    cout << "\n[長方體資訊]\n";
    cout << "長: " << length << endl;
    cout << "寬: " << width << endl;
    cout << "高: " << height << endl;
    cout << "體積: " << length * width * height << endl;
}
