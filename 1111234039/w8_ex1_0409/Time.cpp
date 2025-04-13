#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Time.h"
using namespace std;
Time::Time(int year, int month, int day)
{
    setTime(year, month, day);
} 
void Time::setTime(int h, int m, int s)
{
    setHour(h);
    setMinute(m); 
    setSecond(s); 
} 
void Time::setHour(int h)
{
    try
    {
        if (h < 1911 || h > 2050)
            throw invalid_argument("year must be 1911-2050"); 
        year = h;
    } 
    catch (invalid_argument& e)
    {
        cout << e.what() << endl;
    }
} 
void Time::setMinute(int m)
{
    try
    {
        if (m < 1 || m > 12)
            throw invalid_argument("month must be 1-12"); 
        month = m;
    } 
    catch (invalid_argument& e)
    {
        cout << e.what() << endl;
    }
} 
void Time::setSecond(int s)
{
    try
    {
        if (s < 1 || s > 31)
            throw invalid_argument("day must be 1-31"); 
        day = s;
    } 
    catch (invalid_argument& e)
    {
        cout << e.what() << endl;
    }

} 
unsigned int Time::getHour() const
{
    return year;
} 
unsigned int Time::getMinute() const
{
    return month;
}
unsigned int Time::getSecond() const
{
    return day;
}
void Time::printUniversal() const
{
    cout << setfill('0') << setw(2) << getHour() << ":"
        << setw(2) << getMinute() << ":" << setw(2) << getSecond() << endl;
} 
void Time::printStandard() const
{
    cout << (getHour() - 1911)
        << ":" << setfill('0') << setw(2) << getMinute()
        << ":" << setw(2) << getSecond() << endl;
} 
