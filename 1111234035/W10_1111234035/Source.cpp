#include <iostream>
#include <stdexcept>
#include "Date.h"
using namespace std;

int main()
{
    int year, month, day;

    cout << "��J�~:";
    cin >> year;
    cout << "��J��:";
    cin >> month;
    cout << "��J��:";
    cin >> day;

    Date d1(year, month, day);
}