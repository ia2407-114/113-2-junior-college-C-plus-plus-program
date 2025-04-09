//�D��1. �ק�W��Time.h�BTime.cpp�Bfig09_06.cpp���{���X�A�إߤ@�ӥi�H���ϥΪ̳z�L��L��J��~�B��B��A���O�L�X�褸�P�������A���{���X�ݹF���H�U����:
//1. �Шϥ����O�w�q�A�w�q�����ХΡ���H��k��
//(��H��k�N�O�����P��@����)
//2. ��������гz�L�غc�l�]�w�P�]�w�w�]��(�w�]�Ȭ�1990�~1��1��)
//(�褸�~���d�򤶩�1911 - 2050)
//3. �����P�_���e�O�_���T�A�Ҧp2017 / 03 / 32�����~�����

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
        throw invalid_argument("���~��");
}

void Date::setMonth(int m)
{
    if (m >= 1 && m <= 12)
        month = m;
    else
        throw invalid_argument("���~��");
}

void Date::setDay(int d)
{
    if (d >= 1 && d <= 31)
        day = d;
    else
        throw invalid_argument("���~��");
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
    cout << setfill('0') << "�褸�~" << getYear() << "���"
        << setw(2) << getMonth() << "��" << setw(2) << getDay();
}

void Date::printStandard() const
{
    cout << setfill('0') << "�褸�~" << getYear() - 1911 << "���"
        << setw(2) << getMonth() << "��" << setw(2) << getDay();
}