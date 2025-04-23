#include <iostream>
#include "date.h"  
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
        Date date(year, month, day); // ���իإ� Date ����

        cout << "\n��X���G�G" << endl;
        date.printUniversal();  // ��X�褸�榡
        cout << endl;
        date.printStandard();   // ��X����榡
        cout << endl;

    }
    catch (invalid_argument& e) { // ������J���~
        cout << "��J���~�G" << e.what() << endl;
    }

    return 0;
}


