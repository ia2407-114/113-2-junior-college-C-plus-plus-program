#include <iostream>
#include <string>
#include"air.h"
using namespace std;
// ���檫�����O 

int main()
{
    airliner air1;
    air1.display();
    air1.display_airliner();
    
    cargo cargo1;
    cargo1.display();
    cargo1.display_cargo();

    return 0;
}
