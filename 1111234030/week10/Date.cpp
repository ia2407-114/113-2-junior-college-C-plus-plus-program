// Time.cpp
// 程式碼序號: 22196883
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Date.h" // 請在此引入必要的使用者標頭檔
using namespace std;

// Time constructor initializes each data member 
Date::Date(int hour, int minute, int second)
{
    setDate(hour, minute, second); // validate and set time
} // end Time constructor

Date::~Date() {
    printUniversal();
    printStandard();
    cout << "bye bye";
}

// set new Time value using universal time
void Date::setDate(int h, int m, int s)
{
    setyear(h); // set private field hour
    setmonth(m); // set private field minute
    setday(s); // set private field second
} // end function setTime

// set hour value
void Date::setyear(int y)
{
    if (y >= 1911 && y < 2050)
        year = y;
    else
        throw invalid_argument("year must be 1911-2050");
} // end function setHour

// set minute value
void Date::setmonth(int m)
{
    if (m >= 1 && m < 12)
        month = m;
    else
        throw invalid_argument("month must be 1-12");
} // end function setMinute

// set second value
void Date::setday(int d)
{
    if (d >= 1 && d < 31)
        day = d;
    else
        throw invalid_argument("d must be 0-59");
} // end function setSecond

// return hour value
unsigned int Date::getyear() const
{
    return year;
} // end function getHour

// return minute value
unsigned int Date::getmonth() const
{
    return month;
} // end function getMinute

// return second value
unsigned int Date::getday() const
{
    return day;
} // end function getSecond

void Date::printUniversal() const
{
    cout << setfill('0') << setw(2) << "西元" << getyear() << "年"
        << setw(2) << getmonth() << "月" << setw(2) << getday() << "日\n";
} // end function printUniversal

void Date::printStandard() const
{
    cout << "中華民國" << getyear() - 1911 << "年" << getmonth()
        << "月" << setw(2) << getday() << "日";
}