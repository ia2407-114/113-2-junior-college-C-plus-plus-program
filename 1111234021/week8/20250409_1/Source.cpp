// Fig. 9.6: fig09_06.cpp 
// Constructor with default arguments and user input for date.
#include <iostream>
#include <stdexcept>
#include "Data.h" // Include definition of class Data from Data.h
using namespace std;

int main() {
    // Test default constructor
    Data t1; // All arguments defaulted to 1990/1/1
    cout << "Default date (1990/1/1):\n  Western: ";
    t1.printWestern(); // 1990/01/01
    cout << "\n  ROC: ";
    t1.printROC();     // 079/01/01
    cout << "\n\n";

    // User input for date
    int year, month, day;
    cout << "請輸入西元年 (1911-2050): ";
    cin >> year;
    cout << "請輸入月份 (1-12): ";
    cin >> month;
    cout << "請輸入日期 (1-31): ";
    cin >> day;

    try {
        Data t2(year, month, day); // Create object with user input
        cout << "您輸入的日期:\n  Western: ";
        t2.printWestern(); // e.g., 2023/04/09
        cout << "\n  ROC: ";
        t2.printROC();     // e.g., 112/04/09
        cout << endl;
    }
    catch (invalid_argument& e) {
        cerr << "錯誤: " << e.what() << endl;
    }

    // Test invalid date
    try {
        Data t3(2017, 3, 32); // Invalid day
        cout << "This line won't execute due to invalid date.\n";
    }
    catch (invalid_argument& e) {
        cerr << "\n測試無效日期 (2017/3/32): " << e.what() << endl;
    }
}