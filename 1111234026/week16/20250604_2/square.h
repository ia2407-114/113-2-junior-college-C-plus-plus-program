#pragma once
#include <iostream>
using namespace std;

class square_2D {
protected:
    double length;
    double width;

public:
    square_2D();         // �غc�l
    ~square_2D();        // �Ѻc�l
    void print_2D();     // �L�X���B�e�B���n
};

class rect_3D : public square_2D {
private:
    double height;
public:
    rect_3D();          // �غc�l
    ~rect_3D();         // �Ѻc�l
    void print_3D();    // �L�X���B�e�B���B��n
};
