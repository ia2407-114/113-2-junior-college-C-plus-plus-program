#include <iostream>
#include "date.h"  
using namespace std;

int main() {
    int year, month, day;

    cout << "請輸入西元年 (1911-2050): ";
    cin >> year;

    cout << "請輸入月份 (1-12): ";
    cin >> month;

    cout << "請輸入日期 (1-31): ";
    cin >> day;

    try {
        Date date(year, month, day); // 嘗試建立 Date 物件

        cout << "\n輸出結果：" << endl;
        date.printUniversal();  // 輸出西元格式
        cout << endl;
        date.printStandard();   // 輸出民國格式
        cout << endl;

    }
    catch (invalid_argument& e) { // 捕捉輸入錯誤
        cout << "輸入錯誤：" << e.what() << endl;
    }

    return 0;
}


