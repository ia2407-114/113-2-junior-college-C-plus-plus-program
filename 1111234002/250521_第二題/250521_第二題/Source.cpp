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
}/*�D��2. ���O�Q��"�w�s���O" string���B��l�h���A�H�� "�ۭq�B��l�h�� :>>�P<<" ��ؤ覡�A
 �N ��J��"����114�~05��21��" �L�o�X�Ʀr�A�A�L�X�º骺�Ʀr "1140521"�A�̫�A�L�X �榡: "114/05/21"*/