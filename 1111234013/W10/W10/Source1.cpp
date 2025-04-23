// Time.cpp
// 程式碼序號: 22196883
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include"Header.h"// 請在此引入必要的使用者標頭檔
using namespace std;

// Time constructor initializes each data member 
Time::Time(int ye, int month, int day)
{
    setymd(ye, month, day); // validate and set time
} // end Time constructor

// set new Time value using universal time
void Time::setymd(int y, int m, int d)
{
    sety(y); // set private field hour
    setM(m); // set private field minute
    setcd(d); // set private field second
} // end function setTime

// set hour value
void Time::sety(int y)
{
    try
    {
        if (y < 1911 || y > 2050)
            
        throw invalid_argument("year must be 1911-2050");
    }
    catch (const std::exception&e)
    {
        cout << e.what() << endl;
    }
    year = y;
} // end function setHour

// set minute value
void Time::setM(int m)
{
    try
    {
        if (m < 1 || m>60)
        {
            
            throw invalid_argument("month must be 1-12");
        }
    }
    catch (const std::exception& e)
    {
        cout << e.what() << endl;
    }
    mon = m;
    
} // end function setMinute

// set second value
void Time::setcd(int d)
{
    try {
        if (d < 1 || d>31)
        {
            
            throw invalid_argument("day must be 0-31");
        }
    }
    catch (const std::exception& e)
    {
        cout << e.what() << endl;
    }
    day = d;
} // end function setSecond
Time::~Time()
{
    printUniversal();
    printStandard();
    cout << "BYE BYE" << endl;
}

unsigned int Time::gety() const
{
    return year;
} // end function getHour

// return minute value
unsigned int Time::getM() const
{
    return mon;
} // end function getMinute

// return second value
unsigned int Time::getd() const
{
    return day;
} // end function getSecond

// print Time in universal-time format (HH:MM:SS)
void Time::printUniversal() const
{
    cout << setfill('0') << setw(2) << gety() << ":"
        << setw(2) << getM() << ":" << setw(2) << getd();
} // end function printUniversal

// print Time in standard-time format (HH:MM:SS AM or PM)
void Time::printStandard() const
{
    cout << (gety() -1911)
        << ":" << setfill('0') << setw(2) << getM()
        << ":" << setw(2) << getd() ;
}