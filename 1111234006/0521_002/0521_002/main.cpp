/*�D��2. ���O�Q��"�w�s���Ostring" ���B��l�h�� & �ۭq�B��l�h�� : ">>�P<<" ��ؤ覡�A
�N��J��"����114�~05��21��" �L�o�X�Ʀr�A�A�L�X�º骺�Ʀr "1140521"�A�̫�A�L�X �榡: "114/05/21"*/
// �אּ: ��J"����114�~05��21��"
// ���L�X�º骺�Ʀr "1140521"
// �A�L�X �榡: "114/05/21"
#include <iostream>
#include "DateString.h"  
using namespace std;

int main()
{
    DateString date;  
    cout << "�п�J����G����114�~05��21��" << endl;
    cin >> date;

    // �L�X�¼Ʀr
    cout << "�¼Ʀr: " << date() << endl;

    // �L�X�榡�Ƥ��
    cout << "�榡�ƿ�X: " << date << endl;

    // �w�s���O string �B��l�h��
    string raw = date();         
    string y = raw.substr(0, 3); // �~�G�e3�X
    string m = raw.substr(3, 2); // ��G���U��2�X
    string d = raw.substr(5, 2); // ��G�̫�2�X

    cout << "�~: " << y << endl;
    cout << "��: " << m << endl;
    cout << "��: " << d << endl;

    return 0;
}
