//�D�ؤ@:�w�q���������P����桨���O�{���X�A�üg�X�D�{���A��J��ƨæL�X���G�C(��@�~��)
//�D�ؤG:�w�q����W�顨���O�{���X�A�íק�D�{���A��J��ƨæL�X���G�C(�h�h�~��)
//�D�ؤT:�w�q����W�顨���O�{���X�A�íק�D�{���A��J��ƨæL�X���G�C(�h���~��)

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

    IceCreamCone cone(r, h1);
    Cylinder cyl(r, h2);

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