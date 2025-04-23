#include <iostream>
#include <stdexcept>
#include "Time.h"
using namespace std;

int main()
{
    int year, month, day;

    cout << "請輸入西元年：";
    cin >> year;
    cout << "請輸入月份：";
    cin >> month;
    cout << "請輸入日期：";
    cin >> day;

    try
    {
        Date date(year, month, day);
        cout << "建立日期成功。" << endl;
    }
    catch (invalid_argument& e)
    {
        cout << "\n\nException: " << e.what() << endl;
    }

    return 0;
}
