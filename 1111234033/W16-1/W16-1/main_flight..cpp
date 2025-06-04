#include <iostream>
#include <string>
using namespace std; 
#include "flight_classes.h"

int main() {
    airliner a;
    cargo c;

    cout << "\n--- 大型客機資訊 ---\n";
    a.display_airliner();

    cout << "\n--- 貨機資訊 ---\n";
    c.display_cargo();

    return 0;
}