#include <iostream>
#include "shapes.h"

using namespace std;

int main() {
    double r, h1, h2;

    cout << "請輸入圓的半徑 r：";
    cin >> r;

    cout << "請輸入甜筒高度 h1：";
    cin >> h1;

    cout << "請輸入圓柱體高度 h2：";
    cin >> h2;

    // 建立物件
    IceCreamCone cone(r, h1);
    Cylinder cyl(r, h2);

    // 計算與顯示
    double area = cone.area();
    double circum = cone.circumference();
    double cone_vol = cone.volume();
    double cyl_vol = cyl.volume();

    cout << "圓面積: " << area << endl;
    cout << "圓周長: " << circum << endl;

    cout << "\n甜筒高: " << h1 << endl;
    cout << "甜筒體積: " << cone_vol << endl;

    cout << "\n圓柱體高 : " << h2 << endl;
    cout << "圓柱體體積 : " << cyl_vol << endl;

    cout << "\n城樓高 : " << h1 + h2 << endl;
    cout << "城樓體積 : " << cone_vol + cyl_vol << endl;

    return 0;
}
