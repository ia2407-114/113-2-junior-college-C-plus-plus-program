#include <iostream>
#include <string>
#include "flight.h"
using namespace std;

int main() {
    cout << "建立一架大型客機\n";
    airliner air1;
    air1.display();
    air1.display_airliner();

    cout << "\n建立一架貨機\n";
    cargo cargo1;
    cargo1.display();
    cargo1.display_cargo();

    return 0;
}