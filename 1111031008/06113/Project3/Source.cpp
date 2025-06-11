#include <iostream>
using namespace std;

// �̰�¦���O�G��
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

// ������O�G�~�Ӷ�
class Pie_2D : public Circ_1D {
public:
    Pie_2D(double r = 0) : Circ_1D(r) {}

    double compute_area() {
        return pi * radius * radius;
    }
};

// �������O
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

// ��W�����O�G�h�h�~��
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

// �h���~�ӡG����
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
    cout << "��J�b�|�B�������סB��W���סG";
    cin >> r >> h1 >> h2;

    Castle cs(r, h1, h2);
    cout << "�`���� = " << cs.compute_total_height() << endl;
    cout << "�`��n = " << cs.compute_volume() << endl;

    return 0;
}
