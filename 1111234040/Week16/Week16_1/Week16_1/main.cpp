// main.cpp
#include <iostream>
#include "flight_object.h"
using namespace std;

int main() {
    cout << "=== �إߤj���Ⱦ� ===" << endl;
    airliner a1;
    cout << "\n=== �إ߳f�� ===" << endl;
    cargo c1;

    cout << "\n=== ��ܤj���Ⱦ���� ===" << endl;
    a1.display();
    a1.display_airliner();

    cout << "\n=== ��ܳf����� ===" << endl;
    c1.display();
    c1.display_cargo();

    return 0;
}
