#include <iostream>
#include <string>
#include "flight.h"
using namespace std;

int main() {
    cout << "�إߤ@�[�j���Ⱦ�\n";
    airliner air1;
    air1.display();
    air1.display_airliner();

    cout << "\n�إߤ@�[�f��\n";
    cargo cargo1;
    cargo1.display();
    cargo1.display_cargo();

    return 0;
}