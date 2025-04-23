#include <iostream>
#include <stdexcept>
#include "Date.h"
using namespace std;

int main()
{
    int year, month, day;

    cout << "輸入年:";
    cin >> year;
    cout << "輸入月:";
    cin >> month;
    cout << "輸入日:";
    cin >> day;

    Date d1(year, month, day);
}