#include <iostream>
#include <stdexcept>
#include "Time.h"
using namespace std;

int main()
{
    int year, month, day;

    cout << "�п�J�~:";
    cin >> year;
    cout << "�п�J��:";
    cin >> month;
    cout << "�п�J���:";
    cin >> day;

    Date my_d(year, month, day);

    //my_d.printUniversal();
    //cout << "\n  ";
    //my_d.printStandard();

}