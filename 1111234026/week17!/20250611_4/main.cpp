#include <iostream>
#include "circ.h"
using namespace std;

int main() {
    castle myCastle;                   // 自動呼叫所有建構子
    myCastle.compute_circ();          // 圓周長
    myCastle.compute_area();          // 圓面積
    myCastle.crom_3d::compute_volume();    // 甜筒體積
    myCastle.cylinder_3d::compute_volume(); // 圓柱體積
    myCastle.compute_height();        // 城樓總高度
    myCastle.compute_volume();        // 城樓總體積
    return 0;
}
