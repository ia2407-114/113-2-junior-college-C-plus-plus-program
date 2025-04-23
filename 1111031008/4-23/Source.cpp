#include <iostream>
#include <stdexcept>
#include "Time.h"
using namespace std;

int main()
{
    int year, month, day;

    cout << "�п�J�褸�~�G";
    cin >> year;
    cout << "�п�J����G";
    cin >> month;
    cout << "�п�J����G";
    cin >> day;

    try
    {
        Date date(year, month, day);
        cout << "�إߤ�����\�C" << endl;
    }
    catch (invalid_argument& e)
    {
        cout << "\n\nException: " << e.what() << endl;
    }

    return 0;
}
