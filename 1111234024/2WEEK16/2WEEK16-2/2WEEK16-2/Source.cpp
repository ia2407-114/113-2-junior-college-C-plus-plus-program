//題目2:建立長方形(square_2D)與長方體(rect_3D)兩個類別，分別為基本類別與衍生類別(也就是rect_3D繼承於square_2D)，square_2D具有"長"、"寬"的屬性以及pirint_2D()方法用來印出長、寬、面積
//rect_3D具有"高度"的屬性以及pirint_3D()方法用來印出長、寬、高、體積。這兩個類別都具有建構子與解構子，輸入長、寬、高資料。請在主程式中分別建立一個長方形與長方體物件
//並印出她們相關的結果(長方形印出長、寬、面積，與長方體則長、寬、高、體積)。

#include <iostream>
#include "Square2D.h"
#include "Rect3D.h"

int main() {
    Square_2D square(2, 6);
    Rect_3D rect(5, 3, 8);

    std::cout << "長方形:" << std::endl;
    square.print_2D();

    std::cout << "長方體: " << std::endl;
    rect.print_3D();

    return 0;
}