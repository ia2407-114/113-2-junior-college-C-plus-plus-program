// �� 9.5: Time.cpp
// Date ���O�����禡����@
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "date.h"
using namespace std;

// Date �غc�l�A��l�ƦU�Ӧ����ܼ�
Date::Date(int year, int month, int day)
{
    setDate(year, month, day); // ���Ҩó]�w���
}

// Date �Ѻc�l
Date::~Date()
{
    printStandard();   // ��X����榡
    printUniversal();  // ��X�褸�榡
    cout << "bye bye" << endl; // �B�~��X
}

// �]�w�s�����
void Date::setDate(int year, int month, int day)
{
    setYear(year);  // �]�w�~��
    setMonth(month); // �]�w���
    setDay(day);    // �]�w���
}

// �]�w�~��
void Date::setYear(int y)
{
    if (y >= 1911 && y <= 2050)
        year = y;
    else
        throw invalid_argument("1911-2050");
}

// �]�w���
void Date::setMonth(int m)
{
    if (m >= 1 && m <= 12)
        month = m;
    else
        throw invalid_argument("1-12");
}

// �]�w���
void Date::setDay(int d)
{
    if (d >= 1 && d <= 31)
        day = d;
    else
        throw invalid_argument("1-31");
}

// ���o�~��
unsigned int Date::getYear() const
{
    return year;
}

// ���o���
unsigned int Date::getMonth() const
{
    return month;
}

// ���o���
unsigned int Date::getDay() const
{
    return day;
}

// �L�X�褸�榡
void Date::printUniversal() const
{
    cout << setfill('0') << "�褸" << getYear() << "�~"
        << setw(2) << getMonth() << " �� " << setw(2) << getDay() << "��";
}

// �L�X����榡
void Date::printStandard() const
{
    cout << setfill('0') << "����" << getYear() - 1911 << "�~"
        << setw(2) << getMonth() << "��" << setw(2) << getDay() << "��";
}
