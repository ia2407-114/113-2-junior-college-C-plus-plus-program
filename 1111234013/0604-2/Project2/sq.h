#pragma once
class square_2D {
protected:
    float length;
    float width;

public:
    
    square_2D();
    
    ~square_2D();


    void print_2D() 
        ;
};
class rect_3D : public square_2D {
private:
    float height;

public:
    // 建構子
    rect_3D();

    // 解構子
    ~rect_3D();

    // 印出 3D 長方體的資料
    void print_3D();
};