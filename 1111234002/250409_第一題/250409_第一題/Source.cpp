/*題目1. 修改上面Time.h、Time.cpp、fig09_06.cpp的程式碼，建立一個可以讓使用者透過鍵盤輸入西年、月、日，分別印出西元與民國日期，但程式碼需達成以下條件:
1. 請使用類別定義，定義部分請用”抽象方法”
(抽象方法就是介面與實作分離)
2. 日期部分請透過建構子設定與設定預設值 (預設值為1990年1月1號)
 (西元年的範圍介於1911-2050)
3. 必須判斷內容是否正確，例如2017/03/32為錯誤的日期*/


#include <iostream>
#include "Date.h"

using namespace std;

int main() {
    int year, month, day;


    cout << "Enter the year (1911-2050): ";
    cin >> year;
    cout << "Enter the month (1-12): ";
    cin >> month;
    cout << "Enter the day (1-31): ";
    cin >> day;

    try {

        Date myDate(year, month, day);
        myDate.printGregorian(); 
        myDate.printROC();       
    }
    catch (const invalid_argument& e) {

        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
