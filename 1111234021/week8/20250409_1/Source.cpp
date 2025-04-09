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
    cout << "�п�J�褸�~ (1911-2050): ";
    cin >> year;
    cout << "�п�J��� (1-12): ";
    cin >> month;
    cout << "�п�J��� (1-31): ";
    cin >> day;

    try {
        Data t2(year, month, day); // Create object with user input
        cout << "�z��J�����:\n  Western: ";
        t2.printWestern(); // e.g., 2023/04/09
        cout << "\n  ROC: ";
        t2.printROC();     // e.g., 112/04/09
        cout << endl;
    }
    catch (invalid_argument& e) {
        cerr << "���~: " << e.what() << endl;
    }

    // Test invalid date
    try {
        Data t3(2017, 3, 32); // Invalid day
        cout << "This line won't execute due to invalid date.\n";
    }
    catch (invalid_argument& e) {
        cerr << "\n���յL�Ĥ�� (2017/3/32): " << e.what() << endl;
    }
}