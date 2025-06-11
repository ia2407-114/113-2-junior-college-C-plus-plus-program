#include <iostream>
#include "shapes.h"

using namespace std;

int main() {
    double r, h1, h2;

    cout << "�п�J�ꪺ�b�| r�G";
    cin >> r;

    cout << "�п�J�������� h1�G";
    cin >> h1;

    cout << "�п�J��W�鰪�� h2�G";
    cin >> h2;

    // �إߪ���
    IceCreamCone cone(r, h1);
    Cylinder cyl(r, h2);

    // �p��P���
    double area = cone.area();
    double circum = cone.circumference();
    double cone_vol = cone.volume();
    double cyl_vol = cyl.volume();

    cout << "�ꭱ�n: " << area << endl;
    cout << "��P��: " << circum << endl;

    cout << "\n������: " << h1 << endl;
    cout << "������n: " << cone_vol << endl;

    cout << "\n��W�鰪 : " << h2 << endl;
    cout << "��W����n : " << cyl_vol << endl;

    cout << "\n���Ӱ� : " << h1 + h2 << endl;
    cout << "������n : " << cone_vol + cyl_vol << endl;

    return 0;
}
