#include <iostream>
#include <string>
using namespace std;
// 飛行物體類別 
#include "air.h"

int main()
{
    airliner air1;
    air1.display();
    air1.display_airliner();

    cout << "\n";

    cargo car1;
    car1.display();
    car1.display_cargoliner();

    return 0;
}