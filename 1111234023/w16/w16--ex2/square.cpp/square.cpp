#include <iostream>
#include "square_2d.h"

Square_2D::Square_2D(double l, double w) : length(l), width(w) {}

Square_2D::~Square_2D() {}

double Square_2D::compute_area() const {
    return length * width;
}

void Square_2D::print_2D() const {
    std::cout << "Length: " << length << ", Width: " << width
        << ", Area: " << compute_area() << std::endl;
}