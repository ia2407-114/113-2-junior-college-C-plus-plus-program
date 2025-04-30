#include <iostream>
#include "Date.h"  
using namespace std;

int main() {
    int year, month, day;

    cout << "�п�J�褸�~ (1911-2050): ";
    cin >> year;

    cout << "�п�J��� (1-12): ";
    cin >> month;

    cout << "�п�J��� (1-31): ";
    cin >> day;

    try {
        Date date(year, month, day);

        cout << "\n��X���G�G" << endl;
        date.printUniversal();  // �褸�榡
        cout << endl;
        date.printStandard();   // ����榡
        cout << endl;

    }
    catch (invalid_argument& e) {
        cout << "��J���~�G" << e.what() << endl;
    }

    return 0;
}