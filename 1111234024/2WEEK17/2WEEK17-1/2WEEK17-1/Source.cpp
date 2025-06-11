//題目一:定義“甜筒”與“圓餅”類別程式碼，並寫出主程式，輸入資料並印出結果。(單一繼承)
//題目二:定義“圓柱體”類別程式碼，並修改主程式，輸入資料並印出結果。(多層繼承)
//題目三:定義“圓柱體”類別程式碼，並修改主程式，輸入資料並印出結果。(多重繼承)

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

    IceCreamCone cone(r, h1);
    Cylinder cyl(r, h2);

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