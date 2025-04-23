// Time.cpp
// 程式碼序號: 22196883
#include <iostream>
#include <iomanip>
#include <stdexcept>
 // 請在此引入必要的使用者標頭檔
#include"Time.h"
using namespace std;

// Time constructor initializes each data member 
Time::Time(int year, int month, int day)
{
    setTime(year, month, day); // validate and set time
} // end Time constructor

// set new Time value using universal time
void Time::setTime(int h, int m, int s)
{
    setHour(h); // set private field hour
    setMinute(m); // set private field minute
    setSecond(s); // set private field second
} // end function setTime

// set hour value
void Time::setHour(int h)
{
    try{
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
void Time::setMinute(int m)
{
    try 
    {
        if (m <1 || m >12)
            throw invalid_argument("month must be 1~12");
        month = m;
    }
    catch (invalid_argument& e)
    {
        cout << e.what() << endl;
    }
} // end function setMinute

// set second value
void Time::setSecond(int s)
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
unsigned int Time::getHour() const
{
    return year;
} // end function getHour

// return minute value
unsigned int Time::getMinute() const
{
    return month;
} // end function getMinute

// return second value
unsigned int Time::getSecond() const
{
    return day;
} // end function getSecond

// print Time in universal-time format (HH:MM:SS)
void Time::printUniversal() const
{
    cout << "西元" << setfill('0') << setw(2) << getHour() << ":"
        << setw(2) << getMinute() << ":" << setw(2) << getSecond() << endl;
} // end function printUniversal

// print Time in standard-time format (HH:MM:SS AM or PM)
void Time::printStandard() const
{
    cout <<"民國" << (getHour() - 1911)
        << ":" << setfill('0') << setw(2) << getMinute()
        << ":" << setw(2) << getSecond() << endl;
} // end function printStandard  //6883