#include <iostream>
#include <stdexcept>
#include "Date.h"
using namespace std;

int main()
{
    int year, month, day;

    cout << "�п�J�褸�~:";
    cin >> year;

    cout << "�п�J���:";
    cin >> month;

    cout << "�п�J��:";
    cin >> day;

    Date my_d(year, month, day);
} /*�ŧi�ëإߤ@�� Date ���O������
    �ǤJ�h��l�Ƴo�Ӫ���C*/