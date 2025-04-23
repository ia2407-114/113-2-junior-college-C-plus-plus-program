// Time.cpp
// 程式碼序號: 22196883
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include"date.h"
 // 請在此引入必要的使用者標頭檔
using namespace std;

date::~date()
{
    printStandard();
    printUniversal();
    cout << "BYE BYE" << endl;
}

// Time constructor initializes each data member 
date::date(int year, int month, int day)
{
    setdate(year, month, day); // validate and set time
} // end Time constructor

// set new Time value using universal time
void date::setdate(int y, int m, int d)
{
    setyear(y); // set private field hour
    setmonth(m); // set private field minute
    setday(d); // set private field second
} // end function setTime

// set hour value
void date::setyear(int y)
{
    if (y >= 1911 && y < 2051)
        year = y;
    else
        throw invalid_argument("year must be 1911-2050");
} // end function setHour

// set minute value
void date::setmonth(int m)
{
    if (m >= 1 && m < 13)
        month = m;
    else
        throw invalid_argument("month must be 1-12");
} // end function setMinute

// set second value
void date::setday(int d)
{
    if (d >= 1 && d < 32)
        day = d;
    else
        throw invalid_argument("day must be 1-31");
} // end function setSecond

// return hour value
unsigned int date::getyear() const
{
    return year;
} // end function getHour

// return minute value
unsigned int date::getmonth() const
{
    return month;
} // end function getMinute

// return second value
unsigned int date::getday() const
{
    return day;
} // end function getSecond

// print Time in universal-time format (HH:MM:SS)
void date::printUniversal() const
{
    cout << setfill('0') << setw(2) << getyear() << "/"
        << setw(2) << getmonth() << "/" << setw(2) << getday() << "\n\n\n";
} // end function printUniversal

// print Time in standard-time format (HH:MM:SS AM or PM)
void date::printStandard() const
{
    cout <<( getyear() - 1911 )
        << "/" << setfill('0') << setw(2) << getmonth()
        << "/" << setw(2) << getday() << "\n\n\n";
} // end function printStandard  //6883
