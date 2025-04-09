// Fig. 9.6: fig09_06.cpp 
// Constructor with default arguments.
#include <iostream>
#include <stdexcept>
#include "Time.h" 
using namespace std;

int main() {
    int year, month, day;
    try {
        cout << "請輸入西元年份 (1911-2050): ";
        cin >> year;
        cout << "請輸入月份 (1-12): ";
        cin >> month;
        cout << "請輸入日期: ";
        cin >> day;

        Date date(year, month, day);

        date.printGregorian();
        date.printRepublicOfChina();
    } catch (const invalid_argument& e) {
        cerr << "錯誤: " << e.what() << endl;
    }

    return 0;
}