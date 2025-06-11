#include <iostream>
#include <string>
using namespace std;
// 飛行物體類別 
#include "cone.h"

int main()
{
    Castle CS;
    CS.Circ_1D::compute_circ();
    CS.Cron_3D::compute_volume();
    CS.Castle::compute_volume();
    CS.Castle::compute_height();
    
    return 0;
}