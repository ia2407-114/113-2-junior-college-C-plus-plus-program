#include <iostream>
using namespace std;

// 父類別：圓周長
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

// 子類別：甜筒（單一繼承）
class Cron_3D : public Circ_1D {
private:
    double height;

public:
    Cron_3D(double r, double h) : Circ_1D(r), height(h) {}

    double compute_volume() {
        return (1.0 / 3) * pi * radius * radius * height;
    }
};

// 子類別：圓餅（單一繼承）
class Pie_2D : public Circ_1D {
public:
    Pie_2D(double r) : Circ_1D(r) {}

    double compute_area() {
        return pi * radius * radius;
    }
};

int main() {
    double r, h;

    cout << "[甜筒] 輸入半徑與高度：";
    cin >> r >> h;
    Cron_3D cone(r, h);
    cout << "甜筒體積 = " << cone.compute_volume() << endl;

    cout << "[圓餅] 輸入半徑：";
    cin >> r;
    Pie_2D pie(r);
    cout << "圓餅面積 = " << pie.compute_area() << endl;

    return 0;
}
