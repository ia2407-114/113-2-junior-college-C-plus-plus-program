
#include <iostream>
#include <stdexcept>
#include "Date.h"
using namespace std;

int main()
{
    Date d1;
    Date d2(1912);
    Date d3(2025, 4);
    Date d4(2050, 3, 10);
    int year, month, day;

    cout << "請輸入西元年:";
    cin >> year;
    cout << "請輸入月份:";
    cin >> month;
    cout << "請輸入天:";
    cin >> day;

    Date my_d(year, month, day);

    cout << "預設值(無參數):\n";
    d1.printUniversal();
    cout << "\n  ";
    d1.printStandard();

    cout << "\n\nD2:\n  ";
    d2.printUniversal();
    cout << "\n  ";
    d2.printStandard();

    cout << "\n\nD3:\n  ";
    d3.printUniversal();
    cout << "\n  ";
    d3.printStandard();

    cout << "\n\nD4:\n  ";
    d4.printUniversal();
    cout << "\n  ";
    d4.printStandard();

    cout << "\n\n使用者輸入:\n  ";
    my_d.printUniversal();
    cout << "\n  ";
    my_d.printStandard();

    try
    {
        Date d5(1111, 3, 4);
    }
    catch (invalid_argument& e)
    {
        cerr << "\n\n錯誤訊息: " << e.what() << endl;
    }
}
