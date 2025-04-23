//題目1. 根據上面程式碼，加上解構子並且由解構子分別印出"西元日期"與"民國日期"，最後再印出"Bye Bye!"
#include <iostream>
#include <stdexcept>
#include "Date.h"
using namespace std;

int main()
{
    int year, month, day;

    cout << "請輸入西元年:";
    cin >> year;
    cout << "請輸入月份:";
    cin >> month;
    cout << "請輸入天:";
    cin >> day;

    Date my_d(year, month, day);

}