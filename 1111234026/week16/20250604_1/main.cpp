#include <iostream>
#include <string>
#include "air.h"
using namespace std;

int main()
{
    cout << "\n===== 建立一架大型客機 =====\n";
    airliner air1;
    air1.display();
    air1.display_airliner();

    cout << "\n===== 建立一架貨機 =====\n";
    cargo air2;
    air2.display();
    air2.display_cargo();

    return 0;
}