#include <iostream>
#include <string>
#include "flight.h"
using namespace std;

int main() {
    cout << "�إߤj���Ⱦ�:\n";
    airliner air1;
    air1.display();
    air1.display_airliner();

    cout << "\n�إ߳f��:\n";
    cargo cargo1;
    cargo1.display();
    cargo1.display_cargo();

    return 0;
}
