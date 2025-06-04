#include "square_2D.h"
#include "rect_3D.h"

int main() {
    square_2D square;
    rect_3D rectangle;

    cout << "\n====== 長方形資料 ======";
    square.print_2D();

    cout << "\n====== 長方體資料 ======";
    rectangle.print_3D();

    return 0;
}
