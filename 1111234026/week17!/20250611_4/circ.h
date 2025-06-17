#pragma once
#include <iostream>
#include <string>
using namespace std;

// 圓周
class circ_1d {
protected:
    double radius = 0.0;
    double pi = 3.14;
    double aa = 0.0;

public:
    string manufacturer;   // 必須加上類型 string
    circ_1d();
    void compute_circ();
};

// 甜筒
class crom_3d : virtual public circ_1d {
protected:
    double height = 0.0;
    double volume = 0.0;

public:
    string pump_jet;       // 必須加上類型 string
    crom_3d();
    void compute_volume();
    double get_height() const { return height; }
    double get_volume() const { return volume; }
};

// 圓面積
class pie_2d : virtual public circ_1d {
protected:
    double area = 0.0;

public:
    pie_2d();
    void compute_area();
};

// 圓柱體
class cylinder_3d : public pie_2d {
protected:
    double height = 0.0;
    double volume = 0.0;
    double surface = 0.0;

public:
    cylinder_3d();
    void compute_volume();
    void compute_surface();
    double get_height() const { return height; }
    double get_volume() const { return volume; }
};

// 城樓（多重繼承）
class castle : public cylinder_3d, public crom_3d {
public:
    void compute_volume();
    void compute_height();
};
