#include <iostream>
#include <stdexcept>
#include "Time.h"
using namespace std;

int main()
{
    int year, month, day;

    cout << "請輸入年:";
    cin >> year;
    cout << "請輸入月:";
    cin >> month;
    cout << "請輸入日期:";
    cin >> day;

    Date my_d(year, month, day);

    //my_d.printUniversal();
    //cout << "\n  ";
    //my_d.printStandard();

}