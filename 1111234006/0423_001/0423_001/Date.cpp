/*0423�D��1. �[�W�u�Ѻc�l�v�åB�ѸѺc�l���O�L�X"�褸���"�P"������"
�A�̫�A�L�X"Bye Bye!"*/
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Date.h" 
using namespace std;

Date::Date(int year, int month, int day)
{
    setDate(year, month, day); 
}
Date::~Date() /* < �Ѻc�l�x�갵�� > 12-19�� */ 
{
    cout << "\n";
    printUniversal();    // ��X�褸
    cout << "\n";
    printStandard();     // ��X����
    cout << "\nBye Bye"; // �����T��
}
void Date::setDate(int year, int month, int day) // �]�w��Ӥ��
{
    setYear(year);   // �]�w�~��
    setMonth(month); // �]�w���
    setDay(day);     // �]�w���
}

// �]�w�~���A�X�z�d�� 1911 ~ 2050
void Date::setYear(int y)
{
    if (y >= 1911 && y <= 2050)
        year = y;
    else
        throw invalid_argument("�褸�~����J1911-2050");
}

// �]�w����A�X�k�d�� 1 ~ 12
void Date::setMonth(int m)
{
    if (m >= 1 && m <= 12)
        month = m;
    else
        throw invalid_argument("�����J1-12");
}

// �]�w����A�X�k�d�� 1 ~ 31
void Date::setDay(int d)
{
    if (d >= 1 && d <= 31)
        day = d;
    else
        throw invalid_argument("�����J1-31");
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

void Date::printUniversal() const // �褸�榡
{
    cout << setfill('0') << "�褸" << getYear() << "�~"
        << setw(2) << getMonth() << "��"
        << setw(2) << getDay() << "��";
}

void Date::printStandard() const // ����榡
{
    cout << setfill('0') << "����" << getYear() - 1911 << "�~"
        << setw(2) << getMonth() << "��"
        << setw(2) << getDay() << "��";
}   /* << getYear() - 1911 <<�C�O�N�u�褸�~�v�ഫ���u����~�v*/
