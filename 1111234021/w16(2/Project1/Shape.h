#pragma once
#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
using namespace std;

// 2D ��������O
class square_2D {
protected:
    float length;
    float width;

public:
    square_2D();             // �غc�l
    virtual ~square_2D();    // �Ѻc�l
    void print_2D();         // �L�X���B�e�P���n
};

// 3D ���������O�A�~�Ӧ� square_2D
class rect_3D : public square_2D {
private:
    float height;

public:
    rect_3D();              // �غc�l
    ~rect_3D();             // �Ѻc�l
    void print_3D();        // �L�X���B�e�B���B��n
};

#endif

