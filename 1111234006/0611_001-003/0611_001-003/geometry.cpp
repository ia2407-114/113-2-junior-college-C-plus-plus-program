#include <iostream>
#include "geometry.h"
using namespace std;

// -------------------------
// 1D 圓周類別：Circ_1D
// -------------------------
Circ_1D::Circ_1D(double r) : radius(r) {}  // 設定半徑

double Circ_1D::compute_circ() const {
    return 2 * pi * radius;  // 計算圓周長
}

// -------------------------
// 3D 圓錐體類別：Cron_3D
// 繼承自 Circ_1D
// -------------------------
Cron_3D::Cron_3D(double r, double h)
    : Circ_1D(r), height(h), volume(0.0) {}  // 初始化半徑、高度、體積

double Cron_3D::compute_volume() {
    volume = (1.0 / 3) * pi * radius * radius * height;  // 體積公式
    return volume;
}

// -------------------------
// 2D 圓形類別：Pie_2D
// 繼承自 Circ_1D
// -------------------------
Pie_2D::Pie_2D(double r)
    : Circ_1D(r), area(0.0) {}  // 初始化半徑、面積

double Pie_2D::compute_area() {
    area = pi * radius * radius;  // 面積公式
    return area;
}

// -------------------------
// 3D 圓柱體類別：Cylinder_3D
// 繼承自 Pie_2D（間接繼承 Circ_1D）
// -------------------------
Cylinder_3D::Cylinder_3D(double r, double h)
    : Pie_2D(r), height(h), volume(0.0), surface(0.0) {}  // 初始化高、體積、表面積

double Cylinder_3D::compute_volume() {
    volume = pi * radius * radius * height;  // 體積公式
    return volume;
}

double Cylinder_3D::compute_surface() {
    surface = 2 * pi * radius * (radius + height);  // 表面積公式
    return surface;
}

// -------------------------
// 城堡類別：Castle
// 同時繼承 Cron_3D + Cylinder_3D（多重繼承）
// -------------------------
Castle::Castle(double r1, double h1, double r2, double h2)
    : Cron_3D(r1, h1), Cylinder_3D(r2, h2) {}  // 初始化上層圓錐與下層圓柱

double Castle::compute_volume() {
    return Cron_3D::compute_volume() + Cylinder_3D::compute_volume();  // 合併體積
}

double Castle::compute_height() {
    return Cron_3D::height + Cylinder_3D::height;  // 合併總高度
}
