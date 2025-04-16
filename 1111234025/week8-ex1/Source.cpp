#include <iostream>
#include <stdexcept>
#include "Time.h" 
using namespace std;
int main()
{
    int y, m, d;
    Time data(1911);
    data.printUniversal();
    data.printStandard();
    cout << "input data: ";
    cin >> y >> m >> d;
    data.setTime(y, m, d);
    data.printUniversal();
    data.printStandard();
}