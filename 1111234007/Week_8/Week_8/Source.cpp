
#include <iostream>
#include <stdexcept>
#include "Date.h"
using namespace std;

int main()
{
    Date d1;
    Date d2(1912);
    Date d3(2025, 4);
    Date d4(2050, 3, 10);
    int year, month, day;

    cout << "�п�J�褸�~:";
    cin >> year;
    cout << "�п�J���:";
    cin >> month;
    cout << "�п�J��:";
    cin >> day;

    Date my_d(year, month, day);

    cout << "�w�]��(�L�Ѽ�):\n";
    d1.printUniversal();
    cout << "\n  ";
    d1.printStandard();

    cout << "\n\nD2:\n  ";
    d2.printUniversal();
    cout << "\n  ";
    d2.printStandard();

    cout << "\n\nD3:\n  ";
    d3.printUniversal();
    cout << "\n  ";
    d3.printStandard();

    cout << "\n\nD4:\n  ";
    d4.printUniversal();
    cout << "\n  ";
    d4.printStandard();

    cout << "\n\n�ϥΪ̿�J:\n  ";
    my_d.printUniversal();
    cout << "\n  ";
    my_d.printStandard();

    try
    {
        Date d5(1111, 3, 4);
    }
    catch (invalid_argument& e)
    {
        cerr << "\n\n���~�T��: " << e.what() << endl;
    }
}
