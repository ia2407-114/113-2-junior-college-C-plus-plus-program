#include <iostream>
#include "square_2D.h"
using namespace std;

square_2D::square_2D(double l, double w) : length(l), width(w) {
    cout << "square_2D 建構子被呼叫" << endl;
}  // 建構子實作

square_2D::~square_2D() {
    cout << "square_2D 解構子被呼叫" << endl;
}  // 解構子實作

void square_2D::print_2D() {
    double area = length * width;
    cout << "長: " << length << ", 寬: " << width << ", 面積: " << area << endl;
}  // 印出長、寬與: 面積

/* rect_3D 是 square_2D 的「子類別」，表示立體的長方體 */
class rect_3D : public square_2D {
private:
    double height;

public:  // 建構子：初始化長、寬、高
    rect_3D(double l, double w, double h);
    ~rect_3D();
    void print_3D();
};  

rect_3D::rect_3D(double l, double w, double h) : square_2D(l, w), height(h) {
    cout << "rect_3D 建構子被呼叫" << endl;
}// 建構子實作

rect_3D::~rect_3D() {
    cout << "rect_3D 解構子被呼叫" << endl;
}// 解構子實作

void rect_3D::print_3D() {
    double volume = length * width * height;
    cout << "長: " << length << ", 寬: " << width << ", 高: " << height
        << ", 體積: " << volume << endl;
}// 印出長、寬、高與: 體積
