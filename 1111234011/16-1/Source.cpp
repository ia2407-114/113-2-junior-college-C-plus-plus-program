#include <iostream>
#include <string>
#include "air.h"
using namespace std;

int main()
{
    airliner air1;
    cargo air2;
    air1.display();
    air1.display_airliner();
    air2.display();
    air2.display_cargo();

    return 0;
}