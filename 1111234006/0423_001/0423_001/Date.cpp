/*0423題目1. 加上「解構子」並且由解構子分別印出"西元日期"與"民國日期"
，最後再印出"Bye Bye!"*/
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Date.h" 
using namespace std;

Date::Date(int year, int month, int day)
{
    setDate(year, month, day); 
}
Date::~Date() /* < 解構子ㄉ實做檔 > 12-19行 */ 
{
    cout << "\n";
    printUniversal();    // 輸出西元
    cout << "\n";
    printStandard();     // 輸出民國
    cout << "\nBye Bye"; // 結束訊息
}
void Date::setDate(int year, int month, int day) // 設定整個日期
{
    setYear(year);   // 設定年份
    setMonth(month); // 設定月份
    setDay(day);     // 設定日期
}

// 設定年份，合理範圍為 1911 ~ 2050
void Date::setYear(int y)
{
    if (y >= 1911 && y <= 2050)
        year = y;
    else
        throw invalid_argument("西元年份輸入1911-2050");
}

// 設定月份，合法範圍為 1 ~ 12
void Date::setMonth(int m)
{
    if (m >= 1 && m <= 12)
        month = m;
    else
        throw invalid_argument("月份輸入1-12");
}

// 設定日期，合法範圍為 1 ~ 31
void Date::setDay(int d)
{
    if (d >= 1 && d <= 31)
        day = d;
    else
        throw invalid_argument("日期輸入1-31");
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

void Date::printUniversal() const // 西元格式
{
    cout << setfill('0') << "西元" << getYear() << "年"
        << setw(2) << getMonth() << "月"
        << setw(2) << getDay() << "日";
}

void Date::printStandard() const // 民國格式
{
    cout << setfill('0') << "民國" << getYear() - 1911 << "年"
        << setw(2) << getMonth() << "月"
        << setw(2) << getDay() << "日";
}   /* << getYear() - 1911 <<。是將「西元年」轉換為「民國年」*/
