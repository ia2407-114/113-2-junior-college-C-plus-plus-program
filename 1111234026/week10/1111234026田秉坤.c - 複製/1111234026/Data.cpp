// Time.cpp
// �{���X�Ǹ�: 22196883
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include"Data.h"// �Цb���ޤJ���n���ϥΪ̼��Y��
using namespace std;

// Time constructor initializes each data member 
Data::Data(int year, int month, int day)
{
    setData(year, month, day); // validate and set time
} // end Time constructor
Data::~Data() {
    printWestern();
    printROC();
    cout << "Bye Bye!" << endl;
}

// set new Time value using universal time
void Data::setData(int y, int m, int d)
{
    setYear(y); // set private field hour
    setMonth(m); // set private field minute
    setDay(d); // set private field second
} // end function setTime

// set hour value
void Data::setYear(int y)
{
    if (y >= 1911 && y < 2100)
        year = y;
    else
        throw invalid_argument("�п�J1911�~��2100�~����");
} // end function setHour

// set minute value
void Data::setMonth(int m)
{
    if (m < 13)
        month = m;
    else
        throw invalid_argument("�u���Q�G�Ӥ�");
} // end function setMinute

// set second value
void Data::setDay(int d)
{
    int daysinmonth[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    if (d <= daysinmonth[month])
        day = d;
    else
        throw invalid_argument("����L�ĶW�X�Ӥ�Ѽ�");
} // end function setSecond

// return hour value
unsigned int Data::getYear() const
{
    return year;
} // end function getHour

// return minute value
unsigned int  Data::getMonth() const
{
    return month;
} // end function getMinute

// return second value
unsigned int  Data::getDay() const
{
    return day;
} // end function getSecond

// print Time in universal-time format (HH:MM:SS)
void  Data::printWestern() const
{
    cout << setfill('0') << setw(4) << getYear() << "/"
        << setw(2) << getMonth() << "/" << setw(2) << getDay()<<endl;
} // end function printUniversal

// print Time in standard-time format (HH:MM:SS AM or PM)
void  Data::printROC() const
{
    cout << setfill('0') << setw(4) << (getYear() - 1911) << "/"
        << setw(2) << getMonth() << "/" << setw(2) << getDay()<<endl;
} // end function printStandard  //6883