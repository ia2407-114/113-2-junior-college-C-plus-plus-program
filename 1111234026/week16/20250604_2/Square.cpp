#include "square.h"


square_2D::square_2D() {
    cout << "請輸入長與寬: ";
    cin >> length >> width;
}

square_2D::~square_2D() {
    cout << "[square_2D 解構子] 已釋放資源。\n";
}

void square_2D::print_2D() {
    cout << "\n--- 長方形 ---\n";
    cout << "長: " << length << endl;
    cout << "寬: " << width << endl;
    cout << "面積: " << length * width << endl;
}

// ===== rect_3D =====
rect_3D::rect_3D() {
    cout << "請輸入高度: ";
    cin >> height;
}

rect_3D::~rect_3D() {
    cout << "[rect_3D 解構子] 已釋放資源。\n";
}

void rect_3D::print_3D() {
    cout << "\n--- 長方體 ---\n";
    cout << "長: " << length << endl;
    cout << "寬: " << width << endl;
    cout << "高: " << height << endl;
    cout << "體積: " << length * width * height << endl;
}
