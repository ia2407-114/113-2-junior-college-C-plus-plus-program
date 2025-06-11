#include <iostream>
using namespace std;

// �̤W�h�G��P��
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

// �����h�G���
class Pie_2D : public Circ_1D {
public:
    Pie_2D(double r = 0) : Circ_1D(r) {}

    double compute_area() {
        return pi * radius * radius;
    }
};

// �̤U�h�G��W��]�h�h�~�ӡ^
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
    cout << "[��W��] ��J�b�|�P���סG";
    cin >> r >> h;

    Cylinder_3D cyl(r, h);
    cout << "��W����n = " << cyl.compute_volume() << endl;
    cout << "��W����n = " << cyl.compute_surface() << endl;

    return 0;
}
