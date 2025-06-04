#include <iostream>
#include"Header.h"
using namespace std;
int main() {
    cout << "== 輸入長方形資料 ==\n";
    square_2D rect2D;
    rect2D.print_2D();

    cout << "\n== 輸入長方體資料 ==\n";
    rect_3D rect3D;
    rect3D.print_3D();

    return 0;
}
