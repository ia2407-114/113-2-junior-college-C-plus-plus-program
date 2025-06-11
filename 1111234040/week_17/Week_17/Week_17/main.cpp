#include <iostream>
#include "shapes.h"
using namespace std;

int main() {
    cout << "===== ³æ¤@Ä~©Ó¡G²¢µ© (Cone) =====" << endl;
    Cone cone;
    cone.input();
    cone.print();

    cout << "\n===== ¦h¼hÄ~©Ó¡G¶ê¬W (Cylinder) =====" << endl;
    Cylinder cylinder;
    cylinder.input();
    cylinder.print();

    cout << "\n===== ¦h­«Ä~©Ó¡G¶ê¬W (CylinderMultiple) =====" << endl;
    CylinderMultiple cm;
    cm.input();
    cm.print();

    return 0;
}
