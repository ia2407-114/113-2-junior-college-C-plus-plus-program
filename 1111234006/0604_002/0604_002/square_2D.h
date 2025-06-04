#ifndef SQUARE_2D_H
#define SQUARE_2D_H

// square_2D 是「父類別」，表示一個平面的長方形
class square_2D {
protected:
    double length; // 長
    double width;  // 寬

public:
    // 建構子
    square_2D(double l, double w);

    // 解構子
    ~square_2D();

    // 印出長、寬與面積
    void print_2D();
};

#endif
