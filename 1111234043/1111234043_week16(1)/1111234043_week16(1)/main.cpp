#include "Shape.h"

int main() {
    // 建立並輸入一個 2D 長方形
    cout << "===== 輸入長方形資料 =====" << endl;
    square_2D rect2D;
    rect2D.print_2D();

    // 建立並輸入一個 3D 長方體
    cout << "\n===== 輸入長方體資料 =====" << endl;
    rect_3D rect3D;
    rect3D.print_3D();

    return 0;
}
