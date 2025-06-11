#include <iostream>
using namespace std;

// �����O�G��P��
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

// �l���O�G�����]��@�~�ӡ^
class Cron_3D : public Circ_1D {
private:
    double height;

public:
    Cron_3D(double r, double h) : Circ_1D(r), height(h) {}

    double compute_volume() {
        return (1.0 / 3) * pi * radius * radius * height;
    }
};

// �l���O�G���]��@�~�ӡ^
class Pie_2D : public Circ_1D {
public:
    Pie_2D(double r) : Circ_1D(r) {}

    double compute_area() {
        return pi * radius * radius;
    }
};

int main() {
    double r, h;

    cout << "[����] ��J�b�|�P���סG";
    cin >> r >> h;
    Cron_3D cone(r, h);
    cout << "������n = " << cone.compute_volume() << endl;

    cout << "[���] ��J�b�|�G";
    cin >> r;
    Pie_2D pie(r);
    cout << "��歱�n = " << pie.compute_area() << endl;

    return 0;
}
