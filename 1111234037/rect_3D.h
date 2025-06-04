#pragma once
#ifndef RECT_3D_H
#define RECT_3D_H

#include "square_2D.h"

class rect_3D : public square_2D {
private:
    float height;

public:
    rect_3D();
    ~rect_3D();
    void print_3D();
};

#endif
