#include "geometry.h"

// Circ_1D
Circ_1D::Circ_1D(double r) : radius(r) {}
double Circ_1D::compute_circ() const {
    return 2 * pi * radius;
}

// Cron_3D
Cron_3D::Cron_3D(double r, double h) : Circ_1D(r), height(h) {}
double Cron_3D::compute_volume() {
    volume = (1.0 / 3) * pi * radius * radius * height;
    return volume;
}

// Pie_2D
Pie_2D::Pie_2D(double r) : Circ_1D(r) {}
double Pie_2D::compute_area() {
    area = pi * radius * radius;
    return area;
}

// Cylinder_3D
Cylinder_3D::Cylinder_3D(double r, double h) : Pie_2D(r), height(h) {}
double Cylinder_3D::compute_volume() {
    volume = pi * radius * radius * height;
    return volume;
}
double Cylinder_3D::compute_surface() {
    surface = 2 * pi * radius * (radius + height);
    return surface;
}

// Castle
Castle::Castle(double r1, double h1, double r2, double h2)
    : Cron_3D(r1, h1), Cylinder_3D(r2, h2) {}

double Castle::compute_volume() {
    return Cron_3D::compute_volume() + Cylinder_3D::compute_volume();
}

double Castle::compute_height() {
    return Cron_3D::height + Cylinder_3D::height;
}
