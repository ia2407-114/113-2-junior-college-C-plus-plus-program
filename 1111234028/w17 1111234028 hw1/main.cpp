#include <iostream>
#include <string>
using namespace std;
// ���檫�����O 
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