/*Date.cpp 0409�D��1.*/
#include <iostream>
#include <stdexcept>
#include "Date.h"
using namespace std;

// �غc�l�A��l�Ƥ��
Date::Date(int y, int m, int d) {
    setDate(y, m, d); // �ϥ� setDate ��k�]�w���
}

// �]�w����A�����Ҥ���O�_���T
void Date::setDate(int y, int m, int d) {
   
    if (y < 1911 || y > 2050) // ���Ҧ~���d�� (�褸�~�ݦb 1911 �� 2050 ����)
        throw invalid_argument("Year must be between 1911 and 2050.");

    if (m < 1 || m > 12)  // ���Ҥ���d�� (����ݦb 1 �� 12 ����)
        throw invalid_argument("Month must be between 1 and 12.");

    if (d < 1 || d > 31)  // ���Ҥ���d�� (����ݦb 1 �� 31 ����)
        throw invalid_argument("Day must be between 1 and 31.");

    // ���� 4 ��B6 ��B9 ��M 11 �몺����u�ର 30 ��
    if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30)
        throw invalid_argument("Invalid day for this month.");

    if (m == 2 && d > 29) // ���� 2 �몺����A�̦h 29 ��
        throw invalid_argument("Invalid day for February.");

    // ���� 2 �� 29 ��O�_���|�~
    if (m == 2 && d == 29 && !((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)))
        throw invalid_argument("Invalid day for February in a non-leap year.");

    // �]�w���
    year = y;
    month = m;
    day = d;
}

void Date::printGregorian() const {    // ��X�褸���
    cout << "Gregorian Date: " << year << "/" << month << "/" << day << endl;
}

void Date::printROC() const {    // ��X������ (�N�褸�~���ഫ������~��)
    cout << "ROC Date: " << (year - 1911) << "/" << month << "/" << day << endl;
}
