#include <iostream>
#include "rect_3d.h"

Rect_3D::Rect_3D(double l, double w, double h) : Square_2D(l, w), height(h) {}

Rect_3D::~Rect_3D() {}

double Rect_3D::compute_volume() const {
    return length * width * height;
}

double Rect_3D::compute_surface() const {
    return 2 * (length * width + length * height + width * height);
}

void Rect_3D::print_3D() const {
    std::cout << "Length: " << length << ", Width: " << width
        << ", Height: " << height << ", Volume: " << compute_volume()
        << std::endl;
}