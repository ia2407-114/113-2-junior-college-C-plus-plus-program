#include <iostream>
#include <string>
#include "air.h"

using namespace std;
// ���檫�����O 
int main()
{
    airliner air1;
    air1.display();
    air1.display_airliner();
    cout << "\n��J�f�����:\n";
    cargo c1;
    c1.display();
    c1.display_cargo();

    return 0;
}

