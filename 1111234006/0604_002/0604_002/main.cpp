/*題目2 :建立長方形(square_2D)與長方體(rect_3D)兩個類別，分別為基本類別與衍生類別(也就是rect_3D繼承於square_2D)，
square_2D具有"長"、"寬"的屬性以及: pirint_2D( )方法用來印出長、寬、面積，
rect_3D具有"高度"的屬性以及: pirint_3D( )方法用來印出長、寬、高、體積。
這兩個類別都具有 (建構子) 與 (解構子)，輸入長、寬、高資料。請在主程式中分別建立一個長方形與長方體物件，
並印出她們相關的結果(長方形印出長、寬、面積，與長方體則長、寬、高、體積)。*/
#include <iostream>
#include "square_2D.h"
using namespace std;

class rect_3D : public square_2D {
private:
    double height;

public:
    rect_3D(double l, double w, double h);
    ~rect_3D();
    void print_3D();
};

int main() {
    double l, w, h;
  
    cout << "請輸入長方形的長與寬: ";
    cin >> l >> w;
    square_2D rect2D(l, w);  // 建立 square_2D 物件（父類別）
    rect2D.print_2D();    // 印出面積

    cout << endl;

    cout << "請輸入長方體的長、寬與高: ";
    cin >> l >> w >> h;
    rect_3D rect3D(l, w, h);   // 建立 rect_3D 物件（子類別）
    rect3D.print_3D();    // 印出體積
     
    return 0;
}
