#include <iostream>
#include <string>
#include "air.h"
using namespace std;
// 飛行物體類別 
int main()
{
    airliner air1;
    air1.display();
    air1.display_airliner();
    
    cout << "\n";

    cargo car1;
    car1.display();
    car1.display_cargo();

    return 0;
}