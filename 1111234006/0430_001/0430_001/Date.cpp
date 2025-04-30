#include <array>      
#include <iostream>  
#include <stdexcept>  
#include "Date.h"     
using namespace std;

Date::Date(int mn, int dy, int yr)
{
    // ���Ҥ���O�_����
    if (mn > 0 && mn <= monthsPerYear)
        month = mn;  
    else
        throw invalid_argument("��������O 1~12");

    year = yr;  
    day = checkDay(dy);  // ���Ҩó]�m���

    
    cout << "Date object constructor for date ";
    print();
    cout << endl;
}

// �L�X Date ���󪺤���A�H "��/��/�~" ���榡���
void Date::print() const
{
    cout << month << '/' << day << '/' << year;
}

Date::~Date()
{
    // ��ܷ� Date ����Q�P���ɪ��T��
    cout << "Date object destructor for date ";
    print();
    cout << endl;
}

// ���Ҩê�^���Ī�����A�Ҽ{�|�~���p
unsigned int Date::checkDay(int testDay) const
{
    // �x�s�C�Ӥ�����ѼơA0 �O���F�P��������]1 �� = 31�A2 �� = 28/29�A...�^
    static const array<int, monthsPerYear + 1> daysPerMonth =
    { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    // �ˬd����O�_�b�Ӥ몺�Ѽƽd��
    if (testDay > 0 && testDay <= daysPerMonth[month])
        return testDay;

    // �ˬd�O�_���|�~�B 2 �� 29 �馳��
    if (month == 2 && testDay == 29 &&
        (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))
        return testDay;

    // �Y����L�ġA�ߥX���~
    throw invalid_argument("Invalid day for current month and year");
}

// ���o�~��
int Date::getYear() const {
    return year;
}

// ������ Date ����A�P�_��e����O�_����ε���ѼƤ������
bool Date::isEarlierThanOrEqual(const Date& other) const {
    // �p�G�~���p���L���󪺦~���A�h����
    if (year < other.year) return true;

    // �p�G�~���ۦP�A�ˬd���
    if (year == other.year && month < other.month) return true;

    // �p�G�~��ۦP�A�ˬd���
    if (year == other.year && month == other.month && day <= other.day) return true;

    // �_�h�A��e�������
    return false;
}
