#include <iostream>
#include <string>
#include "air.h"
using namespace std;
// ���檫�����O 


int main()
{
    airliner air1;
    air1.display();
    air1.display_airliner();

    cargo car;
    car.display();
    car.display_cargo();
    return 0;
}