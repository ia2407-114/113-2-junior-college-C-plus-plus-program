// �� 9.27: Employee.h
// Employee ���O�w�q�A�]�t�@�� static ��Ʀ����A�ΨӰl�ܥثe�b�O���餤�� Employee ����ƶq
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string> // �ϥ� string ���O

class Employee
{
public:
    // �غc�l�G�ǤJ�W�r�P�m��
    Employee(const std::string&, const std::string&);

    // �Ѻc�l�G����Q�P���ɰ���
    ~Employee();

    // �^�ǦW�r
    std::string getFirstName() const;

    // �^�ǩm��
    std::string getLastName() const;

    // �R�A�����禡�G�i�ΨӬd�ߥثe���X�� Employee ����
    static unsigned int getCount();

private:
    // ���u���W�r�P�m��]�@�몺�����ܼơ^
    std::string firstName;
    std::string lastName;

    // �R�A��Ʀ����G�Ҧ� Employee ����@�Τ@���A�����`��
    static unsigned int count;
}; // Employee ���O�w�q����

#endif // EMPLOYEE_H
