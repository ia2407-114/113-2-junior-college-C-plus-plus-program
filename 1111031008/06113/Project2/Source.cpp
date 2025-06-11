#include <iostream>
using namespace std;

// 最上層：圓周長
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

// 中間層：圓餅
class Pie_2D : public Circ_1D {
public:
    Pie_2D(double r = 0) : Circ_1D(r) {}

    double compute_area() {
        return pi * radius * radius;
    }
};

// 最下層：圓柱體（多層繼承）
class Cylinder_3D : public Pie_2D {
private:
    double height;

public:
    Cylinder_3D(double r = 0, double h = 0) : Pie_2D(r), height(h) {}

    double compute_volume() {
        return compute_area() * height;
    }

    double compute_surface() {
        return 2 * compute_area() + compute_circ() * height;
    }
};

int main() {
    double r, h;
    cout << "[圓柱體] 輸入半徑與高度：";
    cin >> r >> h;

    Cylinder_3D cyl(r, h);
    cout << "圓柱體體積 = " << cyl.compute_volume() << endl;
    cout << "圓柱體表面積 = " << cyl.compute_surface() << endl;

    return 0;
}
