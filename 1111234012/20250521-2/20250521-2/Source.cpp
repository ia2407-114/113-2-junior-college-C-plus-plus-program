#include <iostream>
#include "DateString.h"
using namespace std;

int main()
{
    DateString date;

    cout << "�п�J����G����114�~05��21��";
    cin >> date;


    // �L�X�¼Ʀr
    cout << "�¼Ʀr: " << date() << endl;

    // �L�X�榡�Ƥ��
    cout << "�榡�ƿ�X: " << date << endl;

    return 0;
}