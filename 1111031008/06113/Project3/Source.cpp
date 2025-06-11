#include <iostream>
using namespace std;

// 最基礎類別：圓
class Circ_1D {
protected:
    double radius;
    const double pi = 3.14;

public:
    Circ_1D(double r = 0) : radius(r) {}

    double compute_circ() {
        return 2 * pi * radius;
    }
};

// 圓餅類別：繼承圓
class Pie_2D : public Circ_1D {
public:
    Pie_2D(double r = 0) : Circ_1D(r) {}

    double compute_area() {
        return pi * radius * radius;
    }
};

// 甜筒類別
class Cron_3D : public Circ_1D {
protected:
    double height;

public:
    Cron_3D(double r = 0, double h = 0) : Circ_1D(r), height(h) {}

    double compute_volume() {
        return (1.0 / 3) * pi * radius * radius * height;
    }

    double get_height() {
        return height;
    }
};

// 圓柱體類別：多層繼承
class Cylinder_3D : public Pie_2D {
protected:
    double height;

public:
    Cylinder_3D(double r = 0, double h = 0) : Pie_2D(r), height(h) {}

    double compute_volume() {
        return compute_area() * height;
    }

    double get_height() {
        return height;
    }
};

// 多重繼承：城樓
class Castle : public Cron_3D, public Cylinder_3D {
public:
    Castle(double r, double h_cone, double h_cyl)
        : Cron_3D(r, h_cone), Cylinder_3D(r, h_cyl) {}

    double compute_volume() {
        return Cron_3D::compute_volume() + Cylinder_3D::compute_volume();
    }

    double compute_total_height() {
        return Cron_3D::get_height() + Cylinder_3D::get_height();
    }
};

int main() {
    double r, h1, h2;
    cout << "輸入半徑、甜筒高度、圓柱高度：";
    cin >> r >> h1 >> h2;

    Castle cs(r, h1, h2);
    cout << "總高度 = " << cs.compute_total_height() << endl;
    cout << "總體積 = " << cs.compute_volume() << endl;

    return 0;
}
