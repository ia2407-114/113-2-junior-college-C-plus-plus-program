// Time.cpp
// 程式碼序號: 22196883
#include <iostream>
#include <iomanip>
#include <stdexcept>
 // 請在此引入必要的使用者標頭檔
#include"Date.h"
using namespace std;

// Time constructor initializes each data member 
Date::Date(int year, int month, int day)
{
    setDate(year, month, day); // validate and set time
} // end Time constructor

Date::~Date()
{
    printUniversal();
    printStandard();
    cout << "Bye Bye" << endl;
}

// set new Time value using universal time
void Date::setDate(int h, int m, int s)
{
    setYear(h); // set private field hour
    setMonth(m); // set private field minute
    setDay(s); // set private field second
} // end function setTime

// set hour value
void Date::setYear(int h)
{
    try {
        if (h < 1911 || h > 2100)
            throw invalid_argument("year must be 1911~2100");
        year = h;
    }
    catch (invalid_argument& e)
    {
        cout << e.what() << endl;
    }
} // end function setHour

// set minute value
void Date::setMonth(int m)
{
    try
    {
        if (m < 1 || m >12)
            throw invalid_argument("month must be 1~12");
        month = m;
    }
    catch (invalid_argument& e)
    {
        cout << e.what() << endl;
    }
} // end function setMinute

// set second value
void Date::setDay(int s)
{
    try {
        if (s < 1 || s >31)
            throw invalid_argument("day must be 1~31");
        day = s;
    }
    catch (invalid_argument& e)
    {
        cout << e.what() << endl;
    }
} // end function setSecond

// return hour value
unsigned int Date::getYear() const
{
    return year;
} // end function getHour

// return minute value
unsigned int Date::getMonth() const
{
    return month;
} // end function getMinuteay

// return second value
unsigned int Date::getDay() const
{
    return day;
} // end function getSecond

// print Time in universal-time format (HH:MM:SS)
void Date::printUniversal() const
{
    cout << "西元" << setfill('0') << setw(2) << getYear() << ":"
        << setw(2) << getMonth() << ":" << setw(2) << getDay() << endl;
} // end function printUniversal

// print Time in standard-time format (HH:MM:SS AM or PM)
void Date::printStandard() const
{
    cout << "民國" << (getYear() - 1911)
        << ":" << setfill('0') << setw(2) << getMonth()
        << ":" << setw(2) << getDay() << endl;
} // end function printStandard  //6883