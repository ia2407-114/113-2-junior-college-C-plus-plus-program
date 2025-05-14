#include <iostream>
#include <stdexcept>
#include"date.h"
using namespace std;

int main()
{
    int y, m, d;

    cout << "輸入西元日期:";
    cin >> y >> m >> d;
    try
    {
        date data(y, m, d);
    }
    catch (invalid_argument& e)
    {
        cerr << "\n\nException while initializing t5: " << e.what() << endl;
        return 1;
    }
}