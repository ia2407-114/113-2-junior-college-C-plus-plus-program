/*Date.cpp 0409題目1.*/
#include <iostream>
#include <stdexcept>
#include "Date.h"
using namespace std;

// 建構子，初始化日期
Date::Date(int y, int m, int d) {
    setDate(y, m, d); // 使用 setDate 方法設定日期
}

// 設定日期，並驗證日期是否正確
void Date::setDate(int y, int m, int d) {
   
    if (y < 1911 || y > 2050) // 驗證年份範圍 (西元年需在 1911 到 2050 之間)
        throw invalid_argument("Year must be between 1911 and 2050.");

    if (m < 1 || m > 12)  // 驗證月份範圍 (月份需在 1 到 12 之間)
        throw invalid_argument("Month must be between 1 and 12.");

    if (d < 1 || d > 31)  // 驗證日期範圍 (日期需在 1 到 31 之間)
        throw invalid_argument("Day must be between 1 and 31.");

    // 驗證 4 月、6 月、9 月和 11 月的日期只能為 30 天
    if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30)
        throw invalid_argument("Invalid day for this month.");

    if (m == 2 && d > 29) // 驗證 2 月的日期，最多 29 天
        throw invalid_argument("Invalid day for February.");

    // 驗證 2 月 29 日是否為閏年
    if (m == 2 && d == 29 && !((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)))
        throw invalid_argument("Invalid day for February in a non-leap year.");

    // 設定日期
    year = y;
    month = m;
    day = d;
}

void Date::printGregorian() const {    // 輸出西元日期
    cout << "Gregorian Date: " << year << "/" << month << "/" << day << endl;
}

void Date::printROC() const {    // 輸出民國日期 (將西元年份轉換為民國年份)
    cout << "ROC Date: " << (year - 1911) << "/" << month << "/" << day << endl;
}
