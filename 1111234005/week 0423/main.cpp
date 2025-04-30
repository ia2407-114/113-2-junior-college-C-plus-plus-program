#include <iostream>
#include "Date.h"  
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
        Date date(year, month, day);

        cout << "\n輸出結果：" << endl;
        date.printUniversal();  // 西元格式
        cout << endl;
        date.printStandard();   // 民國格式
        cout << endl;

    }
    catch (invalid_argument& e) {
        cout << "輸入錯誤：" << e.what() << endl;
    }

    return 0;
}