#include <iostream>
#include <stdexcept>
#include "Date.h"
using namespace std;
int main()
{
    Date d1; 
    Date d2(2025); 
    Date d3(1999, 7); 
    Date d4(2010, 12, 25); 
    cout << "Constructed with:\n\nd1: all arguments defaulted\n  ";
    d1.printStandard();
    cout << "\n\nd2: year specified; month and day defaulted\n  ";
    d2.printStandard();
    cout << "\n\nd3: year and month specified; day defaulted\n  ";
    d3.printStandard();
    cout << "\n\nd4: year, month, and day specified\n  ";
    d4.printStandard();
    try
    {
        Date d5(2025, 15, 50); 
    }
    catch (invalid_argument& e)
    {
        cerr << "\n\nException while initializing d5: " << e.what() << endl;
    }
    return 0;
}
