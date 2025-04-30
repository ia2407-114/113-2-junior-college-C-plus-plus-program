#include <array>      
#include <iostream>  
#include <stdexcept>  
#include "Date.h"     
using namespace std;

Date::Date(int mn, int dy, int yr)
{
    // 驗證月份是否有效
    if (mn > 0 && mn <= monthsPerYear)
        month = mn;  
    else
        throw invalid_argument("月份必須是 1~12");

    year = yr;  
    day = checkDay(dy);  // 驗證並設置日期

    
    cout << "Date object constructor for date ";
    print();
    cout << endl;
}

// 印出 Date 物件的日期，以 "月/日/年" 的格式顯示
void Date::print() const
{
    cout << month << '/' << day << '/' << year;
}

Date::~Date()
{
    // 顯示當 Date 物件被銷毀時的訊息
    cout << "Date object destructor for date ";
    print();
    cout << endl;
}

// 驗證並返回有效的日期，考慮閏年情況
unsigned int Date::checkDay(int testDay) const
{
    // 儲存每個月份的天數，0 是為了與月份對應（1 月 = 31，2 月 = 28/29，...）
    static const array<int, monthsPerYear + 1> daysPerMonth =
    { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    // 檢查日期是否在該月的天數範圍內
    if (testDay > 0 && testDay <= daysPerMonth[month])
        return testDay;

    // 檢查是否為閏年且 2 月 29 日有效
    if (month == 2 && testDay == 29 &&
        (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))
        return testDay;

    // 若日期無效，拋出錯誤
    throw invalid_argument("Invalid day for current month and year");
}

// 取得年份
int Date::getYear() const {
    return year;
}

// 比較兩個 Date 物件，判斷當前物件是否早於或等於參數中的日期
bool Date::isEarlierThanOrEqual(const Date& other) const {
    // 如果年份小於其他物件的年份，則較早
    if (year < other.year) return true;

    // 如果年份相同，檢查月份
    if (year == other.year && month < other.month) return true;

    // 如果年月相同，檢查日期
    if (year == other.year && month == other.month && day <= other.day) return true;

    // 否則，當前日期較晚
    return false;
}
