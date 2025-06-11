// Fig. 9.6: fig09_06.cpp 
// Constructor with default arguments.
#include <iostream>
#include <stdexcept>
#include "Time.h" 
using namespace std;

int main() {
    int year, month, day;
    try {
        cout << "輸入西元年分(1911-2050): ";
        cin >> year;
        cout << "輸入月份(1 - 12) : ";
        cin >> month;
        cout << "輸入日期: ";
        cin >> day;

        Date date(year, month, day);

        date.printGregorian();
        date.printRepublicOfChina();
    }
    catch (const invalid_argument& e) {
        cerr << "錯誤日期: " << e.what() << endl;
    }

    return 0;
}