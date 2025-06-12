#include <iostream>
#include <string>
#include "geometry.h"
using namespace std;

int main() {
    double r_cron, h_cron, r_cyl, h_cyl;

    std::cout << "�п�J�����b�|�P���G";
    std::cin >> r_cron >> h_cron;

    std::cout << "�п�J��W��b�|�P���G";
    std::cin >> r_cyl >> h_cyl;

    Castle castle(r_cron, h_cron, r_cyl, h_cyl);

    std::cout << "������n: " << castle.Cron_3D::compute_volume() << std::endl;
    std::cout << "��W��n: " << castle.Cylinder_3D::compute_volume() << std::endl;
    std::cout << "��W����n: " << castle.compute_surface() << std::endl;
    std::cout << "�����`��n: " << castle.compute_volume() << std::endl;
    std::cout << "�����`����: " << castle.compute_height() << std::endl;

    return 0;
}
