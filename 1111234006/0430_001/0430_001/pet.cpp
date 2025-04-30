#include <iostream>
#include "pet.h"   
#include "Date.h"   
using namespace std;

// �غc�l�G��l���d���������B�W�r�B�X�ͤ���M��i���
pet::pet(const string& t, const string& n, const Date& bDate, const Date& aDate)
    : type(t), name(n), birthDate(bDate), adoptDate(aDate)
{
    // ��ܷ��d������Q�إ߮ɪ��T��
    cout << "Pet object constructor: " << type << " named " << name << endl;
}

// �L�X�d������T�G�]�A�����B�W�r�B��i��M�X�ͤ�
void pet::print() const
{
    // ����d���������M�W�r
    cout << "�d������: " << type << ", �W�r: " << name << "\n";

    // ����d������i���
    cout << "  ��i��: ";
    adoptDate.print(); // �I�s Date ���O�� print ��ƨӦL�X��i���
    cout << "  �X�ͤ�: ";
    birthDate.print(); // �I�s Date ���O�� print ��ƨӦL�X�X�ͤ��
    cout << endl; 
}

// �Ѻc�l�G���d������Q�P���ɡA��ܾP���T��
pet::~pet()
{
    cout << "Pet object destructor: " << type << " named " << name << endl;
}
