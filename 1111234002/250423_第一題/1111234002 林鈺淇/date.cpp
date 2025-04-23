// 圖 9.5: Time.cpp
// Date 類別成員函式的實作
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "date.h"
using namespace std;

// Date 建構子，初始化各個成員變數
Date::Date(int year, int month, int day)
{
    setDate(year, month, day); // 驗證並設定日期
}

// Date 解構子
Date::~Date()
{
    printStandard();   // 輸出民國格式
    printUniversal();  // 輸出西元格式
    cout << "bye bye" << endl; // 額外輸出
}

// 設定新的日期
void Date::setDate(int year, int month, int day)
{
    setYear(year);  // 設定年份
    setMonth(month); // 設定月份
    setDay(day);    // 設定日期
}

// 設定年份
void Date::setYear(int y)
{
    if (y >= 1911 && y <= 2050)
        year = y;
    else
        throw invalid_argument("1911-2050");
}

// 設定月份
void Date::setMonth(int m)
{
    if (m >= 1 && m <= 12)
        month = m;
    else
        throw invalid_argument("1-12");
}

// 設定日期
void Date::setDay(int d)
{
    if (d >= 1 && d <= 31)
        day = d;
    else
        throw invalid_argument("1-31");
}

// 取得年份
unsigned int Date::getYear() const
{
    return year;
}

// 取得月份
unsigned int Date::getMonth() const
{
    return month;
}

// 取得日期
unsigned int Date::getDay() const
{
    return day;
}

// 印出西元格式
void Date::printUniversal() const
{
    cout << setfill('0') << "西元" << getYear() << "年"
        << setw(2) << getMonth() << " 月 " << setw(2) << getDay() << "日";
}

// 印出民國格式
void Date::printStandard() const
{
    cout << setfill('0') << "民國" << getYear() - 1911 << "年"
        << setw(2) << getMonth() << "月" << setw(2) << getDay() << "日";
}
