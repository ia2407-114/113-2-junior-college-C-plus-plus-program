#include <iostream>
#include <string>
#include "air.h"
using namespace std;

int main()
{
    cout << "\n===== �إߤ@�[�j���Ⱦ� =====\n";
    airliner air1;
    air1.display();
    air1.display_airliner();

    cout << "\n===== �إߤ@�[�f�� =====\n";
    cargo air2;
    air2.display();
    air2.display_cargo();

    return 0;
}