// �� 9.28�GEmployee.cpp
// Employee ���O�������禡�w�q
#include <iostream>
#include "Employee.h" // �ޤJ Employee ���O�w�q
using namespace std;

// �b����R�W�Ŷ����w�q�ê�l���R�A��Ʀ���
unsigned int Employee::count = 0; // �`�N�o�̤���A�[ static ����r

// �w�q�R�A�����禡�A�^�ǥثe�w�إߪ� Employee ����ƶq
// ���禡�b Employee.h ���ŧi�� static
unsigned int Employee::getCount()
{
    return count;
} // getCount ����

// �غc�l�G��l�ƫD�R�A�������ܼơA�ñN�R�A�ܼ� count �W�[ 1
Employee::Employee(const string& first, const string& last)
    : firstName(first), lastName(last) // �ϥΪ�l�ƦC��
{
    ++count; // ���u�`�� +1
    cout << "Employee �غc�l�I�s�A�m�W�G" << firstName
        << ' ' << lastName << endl;
}

// �Ѻc�l�G�b����Q�P���ɷ|����
Employee::~Employee()
{
    cout << "�Ѻc�l ~Employee() �I�s�A�m�W�G" << firstName
        << ' ' << lastName << endl;
    --count; // ���u�`�� -1
}

// �Ǧ^���u���W�r
string Employee::getFirstName() const
{
    return firstName; // �^�ǦW�r���ƥ�
}

// �Ǧ^���u���m��
string Employee::getLastName() const
{
    return lastName; // �^�ǩm�󪺽ƥ�
}
