#include <iostream>
#include <string>
#include"air.h"
using namespace std;


int main()
{
    airliner air1;

    cargo c1;


    air1.display();
    air1.display_airliner();
    
    c1.display();
    c1.display_cargo();

    return 0;
}