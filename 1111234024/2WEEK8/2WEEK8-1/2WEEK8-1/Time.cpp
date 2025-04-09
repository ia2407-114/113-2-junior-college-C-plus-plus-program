//題目1. 修改上面Time.h、Time.cpp、fig09_06.cpp的程式碼，建立一個可以讓使用者透過鍵盤輸入西年、月、日，分別印出西元與民國日期，但程式碼需達成以下條件:
//1. 請使用類別定義，定義部分請用”抽象方法”
//(抽象方法就是介面與實作分離)
//2. 日期部分請透過建構子設定與設定預設值(預設值為1990年1月1號)
//(西元年的範圍介於1911 - 2050)
//3. 必須判斷內容是否正確，例如2017 / 03 / 32為錯誤的日期

// Fig. 9.5: Time.cpp
// Member-function definitions for class Time.
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Time.h"
using namespace std;

Date::Date(int year, int month, int day)
{
    setDate(year, month, day);
}

void Date::setDate(int year, int month, int day)
{
    setYear(year);
    setMonth(month);
    setDay(day);
}

void Date::setYear(int y)
{
    if (y >= 1911 && y <= 2050)
        year = y;
    else
        throw invalid_argument("錯誤的");
}

void Date::setMonth(int m)
{
    if (m >= 1 && m <= 12)
        month = m;
    else
        throw invalid_argument("錯誤的");
}

void Date::setDay(int d)
{
    if (d >= 1 && d <= 31)
        day = d;
    else
        throw invalid_argument("錯誤的");
}

unsigned int Date::getYear() const
{
    return year;
}

unsigned int Date::getMonth() const
{
    return month;
}

unsigned int Date::getDay() const
{
    return day;
}

void Date::printUniversal() const
{
    cout << setfill('0') << "西元年" << getYear() << "月份"
        << setw(2) << getMonth() << "天" << setw(2) << getDay();
}

void Date::printStandard() const
{
    cout << setfill('0') << "西元年" << getYear() - 1911 << "月份"
        << setw(2) << getMonth() << "天" << setw(2) << getDay();
}