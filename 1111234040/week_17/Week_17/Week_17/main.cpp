#include <iostream>
#include "shapes.h"
using namespace std;

int main() {
    cout << "===== ��@�~�ӡG���� (Cone) =====" << endl;
    Cone cone;
    cone.input();
    cone.print();

    cout << "\n===== �h�h�~�ӡG��W (Cylinder) =====" << endl;
    Cylinder cylinder;
    cylinder.input();
    cylinder.print();

    cout << "\n===== �h���~�ӡG��W (CylinderMultiple) =====" << endl;
    CylinderMultiple cm;
    cm.input();
    cm.print();

    return 0;
}
