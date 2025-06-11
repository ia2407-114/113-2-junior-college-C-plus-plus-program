#ifndef RECT_3D_H
#define RECT_3D_H

#include "Square2D.h"

class Rect_3D : public Square_2D {
private:
    double height;

public:
    Rect_3D(double l = 0, double w = 0, double h = 0);
    ~Rect_3D();

    double compute_volume() const;
    double compute_surface() const;
    void print_3D() const;
};
#endif#pragma once
