#pragma once
#ifndef GEOMETRY_H
#define GEOMETRY_H

class Circ_1D {
protected:
    double radius;
    const double pi = 3.14;
public:
    Circ_1D(double r = 0);
    double compute_circ() const;
};

class Cron_3D : public Circ_1D {
protected:
    double height, volume;
public:
    Cron_3D(double r = 0, double h = 0);
    double compute_volume();
};

class Pie_2D : public Circ_1D {
protected:
    double area;
public:
    Pie_2D(double r = 0);
    double compute_area();
};

class Cylinder_3D : public Pie_2D {
protected:
    double height, volume, surface;
public:
    Cylinder_3D(double r = 0, double h = 0);
    double compute_volume();
    double compute_surface();
};

class Castle : public Cron_3D, public Cylinder_3D {
public:
    Castle(double r1, double h1, double r2, double h2);
    double compute_volume();
    double compute_height();
};

#endif