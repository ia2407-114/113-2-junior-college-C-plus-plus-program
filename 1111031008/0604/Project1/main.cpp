#include <iostream>
#include "flight_object.h"
using namespace std;

int main() {
    cout << "��J�j���Ⱦ����:\n";
    airliner air1;
    cout << "\n��J�f�����:\n";
    cargo cargo1;

    cout << "\n�j���Ⱦ����:\n";
    air1.display();
    air1.display_airliner();

    cout << "\n�f�����:\n";
    cargo1.display();
    cargo1.display_cargo();

    return 0;
}
