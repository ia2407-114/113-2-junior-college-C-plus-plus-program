#include <iostream>
#include <string>
using namespace std; 
#include "flight_classes.h"

int main() {
    airliner a;
    cargo c;

    cout << "\n--- �j���Ⱦ���T ---\n";
    a.display_airliner();

    cout << "\n--- �f����T ---\n";
    c.display_cargo();

    return 0;
}