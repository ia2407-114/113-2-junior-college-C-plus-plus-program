// �� 10.20�Gfig10_20.cpp
// �ϥ� static�]�R�A�^��Ʀ����Ӱl�ܬY�����O�إߤF�h�֭Ӫ���C
#include <iostream>
#include "Employee.h" // Employee ���O���w�q
using namespace std;

int main()
{
    // ���ɩ|���إߥ��󪫥�F�ϥ����O�W�٩M�@�ΰ�ѪR�B��l (::)
    // �Ӧs���R�A�����禡 getCount
    cout << "�b�إߥ��󪫥󤧫e�����u�H�ƬO "
        << Employee::getCount() << endl; // �ϥ����O�W�٩I�s�R�A�禡

   // �H�U�o�Ӱ϶����|�إ߻P�P�� Employee ����
   // �o�ǰʧ@�|�b main �����e����
    {
        Employee e1("Susan", "Baker");   // �إ߲Ĥ@����u
        Employee e2("Robert", "Jones");  // �إ߲ĤG����u

        // ���ɤw�g����Ӫ���s�b�F�A���ϥ����O�W�٩M�@�ΰ�ѪR�B��l
        // �I�s�R�A�����禡 getCount
        cout << "�إߪ��󤧫᪺���u�H�ƬO "
            << Employee::getCount();

        // ��ܨC�@����u���m�W
        cout << "\n\n�Ĥ@����u�G"
            << e1.getFirstName() << " " << e1.getLastName()
            << "\n�ĤG����u�G"
            << e2.getFirstName() << " " << e2.getLastName() << "\n\n";
    } // ���}�o�Ӱ϶��ɡAe1 �M e2 �|�Q�۰ʾP��

    // ���ɩҦ����󳣤w�g�Q�R���A�]���A���ϥ����O�W��
    // �I�s�R�A�����禡 getCount
    cout << "\n�P�����󤧫᪺���u�H�ƬO "
        << Employee::getCount() << endl;
} // main �禡����
