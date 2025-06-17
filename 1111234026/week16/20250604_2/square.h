#pragma once
#include <iostream>
using namespace std;

class square_2D {
protected:
    double length;
    double width;

public:
    square_2D();         // 建構子
    ~square_2D();        // 解構子
    void print_2D();     // 印出長、寬、面積
};

class rect_3D : public square_2D {
private:
    double height;
public:
    rect_3D();          // 建構子
    ~rect_3D();         // 解構子
    void print_3D();    // 印出長、寬、高、體積
};
