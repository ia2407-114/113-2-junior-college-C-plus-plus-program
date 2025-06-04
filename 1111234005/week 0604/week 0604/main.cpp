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
    cout << "\n輸入貨機資料:\n";
    cargo c1;
    c1.display();
    c1.display_cargo();

    return 0;
}

