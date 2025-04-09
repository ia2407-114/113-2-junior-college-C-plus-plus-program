/*�D��1. �ק�W��Time.h�BTime.cpp�Bfig09_06.cpp���{���X�A�إߤ@�ӥi�H���ϥΪ̳z�L��L��J��~�B��B��A���O�L�X�褸�P�������A���{���X�ݹF���H�U����:
1. �Шϥ����O�w�q�A�w�q�����ХΡ���H��k��
(��H��k�N�O�����P��@����)
2. ��������гz�L�غc�l�]�w�P�]�w�w�]�� (�w�]�Ȭ�1990�~1��1��)
 (�褸�~���d�򤶩�1911-2050)
3. �����P�_���e�O�_���T�A�Ҧp2017/03/32�����~�����*/


#include <iostream>
#include "Date.h"

using namespace std;

int main() {
    int year, month, day;


    cout << "Enter the year (1911-2050): ";
    cin >> year;
    cout << "Enter the month (1-12): ";
    cin >> month;
    cout << "Enter the day (1-31): ";
    cin >> day;

    try {

        Date myDate(year, month, day);
        myDate.printGregorian(); 
        myDate.printROC();       
    }
    catch (const invalid_argument& e) {

        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
