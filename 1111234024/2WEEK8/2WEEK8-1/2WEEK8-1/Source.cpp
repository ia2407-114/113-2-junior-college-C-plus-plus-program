//題目1. 修改上面Time.h、Time.cpp、fig09_06.cpp的程式碼，建立一個可以讓使用者透過鍵盤輸入西年、月、日，分別印出西元與民國日期，但程式碼需達成以下條件:
//1. 請使用類別定義，定義部分請用”抽象方法”
//(抽象方法就是介面與實作分離)
//2. 日期部分請透過建構子設定與設定預設值(預設值為1990年1月1號)
//(西元年的範圍介於1911 - 2050)
//3. 必須判斷內容是否正確，例如2017 / 03 / 32為錯誤的日期

// Fig. 9.6: fig09_06.cpp 
// Constructor with default arguments.
#include <iostream>
#include <stdexcept>
#include "Time.h"
using namespace std;

int main()
{
    Date d1;
    Date d2(1912);
    Date d3(2025, 4);
    Date d4(2050, 3, 10);
    int year, month, day;

    cout << "請輸入西元年:";
    cin >> year;
    cout << "請輸入月份:";
    cin >> month;
    cout << "請輸入天:";
    cin >> day;

    Date my_d(year, month, day);

    cout << "預設值(無參數):\n";
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

    cout << "\n\n使用者輸入:\n  ";
    my_d.printUniversal();
    cout << "\n  ";
    my_d.printStandard();

    try
    {
        Date d5(1111, 3, 4);
    }
    catch (invalid_argument& e)
    {
        cerr << "\n\n錯誤訊息: " << e.what() << endl;
    }
}