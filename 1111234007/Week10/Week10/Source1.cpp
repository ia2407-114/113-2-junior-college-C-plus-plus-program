#include <iostream>
#include <stdexcept>
#include "Date.h"
using namespace std;

int main()
{
    int year, month, day;

    cout << "請輸入西元年:";
    cin >> year;
    cout << "請輸入月份:";
    cin >> month;
    cout << "請輸入天:";
    cin >> day;

    Date my_d(year, month, day);

}