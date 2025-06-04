#include "square_2D.h"

square_2D::square_2D() {
    cout << "\n執行基礎類別 square_2D 的建構元函式\n";
    cout << "輸入長: "; cin >> length;
    cout << "輸入寬: "; cin >> width;
}

square_2D::~square_2D() {
    cout << "執行基礎類別 square_2D 的解構元函式.\n";
}

void square_2D::print_2D() {
    cout << "\n長方形資料：\n";
    cout << "長: " << length << endl;
    cout << "寬: " << width << endl;
    cout << "面積: " << length * width << endl;
}
