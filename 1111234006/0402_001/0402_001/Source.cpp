/*Source 0402�D��1.
�Q�ΤW�@�����D��2�A�N�d�����O�P�D�{�������A
�åB�N���O�������P��@�b����������ɮסA
�åB�[�H�ק�A���d���W�r���׶W�L10�r���ɡA
�h�^���e10�Ӧr����@�L���m�W�A�̫�N�d�����m�W�L�X�C*/
#include <iostream>   // �ޤJ��J��X�\��]cout�Bcin�^
#include <string>     // �ޤJ�r��\��]string�^
#include "Dog.h"      // �ޤJ�ۭq�� Dog ���O���Y��
using namespace std;  // �ϥμзǩR�W�Ŷ��A���ڭ̥i�H�����g cout �Ӥ��� std::cout

int main()
{
    string dogName;   // �ŧi�����W��
    int age;          // �ŧi�����~��

    // �إߤ@�� Dog ���O������ myDog�A��l�W�٬� "Eva"�A�~�֬� 17
    Dog myDog("Eva", 17);

    // ��ܹw�]���������
    cout << "�w�]" << endl;
    myDog.displayMessage();  // �I�s displayMessage �禡�A��ܥثe�����W�M�~��

    // ���ܨϥΪ̿�J�s�������W��
    cout << "\n�п�J�����W��:";
    getline(cin, dogName);   // �ϥ� getline Ū���@���r��]�]�t�ťա^

    // ���ܨϥΪ̿�J�����~��
    cout << "\n�п�J�����~��:";
    cin >> age;  // �q��LŪ���@�Ӿ�ơA���x�s�� age �ܼƤ�

    // �ϥ� setInfo �禡�N�ϥΪ̿�J���s��Ƨ�s�� myDog ����
    myDog.setInfo(dogName, age);

    cout << endl; // ���@��

    // �A���I�s displayMessage�A��ܧ�s�᪺�������
    myDog.displayMessage();
}
