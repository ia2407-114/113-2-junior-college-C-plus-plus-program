#include "rect_3D.h"

rect_3D::rect_3D() {
    cout << "\n執行子類別 rect_3D 的建構元函式\n";
    cout << "輸入高度: "; cin >> height;
}

rect_3D::~rect_3D() {
    cout << "執行子類別 rect_3D 的解構元函式.\n";
}

void rect_3D::print_3D() {
    print_2D(); // 呼叫父類別的 print_2D 方法
    cout << "高度: " << height << endl;
    cout << "體積: " << length * width * height << endl;
}
