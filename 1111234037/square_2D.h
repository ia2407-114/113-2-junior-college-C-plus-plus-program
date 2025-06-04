#pragma once
#ifndef SQUARE_2D_H
#define SQUARE_2D_H

#include <iostream>
using namespace std;

class square_2D {
protected:
    float length, width;

public:
    square_2D();
    ~square_2D();
    void print_2D();
};

#endif
