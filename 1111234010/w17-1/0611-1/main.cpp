#include <iostream>
#include <string>
#include"fo.h"
using namespace std;
// 飛行物體類別 


int main()
{
    airbus airbus1;
    airbus1.flight_object::display();
    airbus1.airliner::display();
    airbus1.display();

    return 0;
}