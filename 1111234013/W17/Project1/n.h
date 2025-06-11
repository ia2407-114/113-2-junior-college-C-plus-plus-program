#pragma once
#include <iostream>
using namespace std;

class Circ_1D {
protected:
    double radius;
    const double pi = 3.14;

public:
    Circ_1D();
    double getRadius() const; // 提供 radius 給其他類別
};

class Cron_3D : public Circ_1D {
protected:
    double height;
    double volume;

public:
    Cron_3D();
    void compute_volume();
    double getVolume() const;
    double getHeight() const;
};

class Pie_2D {
protected:
    double area;

public:
    Pie_2D();
    void compute_area(double r);
    double getArea() const;
};

class Cylinder_3D : public Pie_2D {
protected:
    double height;
    double volume;
    double surface;

public:
    Cylinder_3D();
    void compute_volume(double r);      // 改為傳入 radius
    void compute_surface(double r);     // 改為傳入 radius
    double getVolume() const;
    double getSurface() const;
    double getHeight() const;
};

class Castle : public Cron_3D, public Cylinder_3D {
public:
    Castle();
    void compute_volume();
    void compute_height();
};
