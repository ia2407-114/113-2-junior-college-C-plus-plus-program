#pragma once
#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
using namespace std;

// 2D 長方形類別
class square_2D {
protected:
    float length;
    float width;

public:
    square_2D();             // 建構子
    virtual ~square_2D();    // 解構子
    void print_2D();         // 印出長、寬與面積
};

// 3D 長方體類別，繼承自 square_2D
class rect_3D : public square_2D {
private:
    float height;

public:
    rect_3D();              // 建構子
    ~rect_3D();             // 解構子
    void print_3D();        // 印出長、寬、高、體積
};

#endif

