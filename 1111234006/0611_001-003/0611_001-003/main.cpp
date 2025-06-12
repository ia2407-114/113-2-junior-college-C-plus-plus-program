#include <iostream>
#include <string>
#include "geometry.h"
using namespace std;

int main() {
    double r_cron, h_cron, r_cyl, h_cyl;

    std::cout << "請輸入甜筒半徑與高：";
    std::cin >> r_cron >> h_cron;

    std::cout << "請輸入圓柱體半徑與高：";
    std::cin >> r_cyl >> h_cyl;

    Castle castle(r_cron, h_cron, r_cyl, h_cyl);

    std::cout << "甜筒體積: " << castle.Cron_3D::compute_volume() << std::endl;
    std::cout << "圓柱體積: " << castle.Cylinder_3D::compute_volume() << std::endl;
    std::cout << "圓柱體表面積: " << castle.compute_surface() << std::endl;
    std::cout << "城樓總體積: " << castle.compute_volume() << std::endl;
    std::cout << "城樓總高度: " << castle.compute_height() << std::endl;

    return 0;
}
