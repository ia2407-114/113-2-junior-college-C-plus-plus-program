//�D��1. �Q�ΤW�@�����D��2�A�N�d�����O�P�D�{�������A�åB�N���O�������P��@�b����������ɮסA�åB�[�H�ק�A���d���W�r���׶W�L10�r���ɡA�h�^���e10�Ӧr����@�L���m�W�A�̫�N�d�����m�W�L�X�C

#include "Dogname.h"
#include <iostream>
using namespace std;

Dogname::Dogname(string name)
{
   
    if (name.length() > 10)
    {
        courseName = name.substr(0, 10);
    }
    else
    {
        courseName = name; 
    }
}

void Dogname::setCourseName(string name)
{
    
    if (name.length() > 10)
    {
        courseName = name.substr(0, 10);
        cout << "�W�r���׶W�L 10�A�w�N�W�r�Y�u��: " << courseName << endl;
    }
    else
    {
        courseName = name;
    }
}

string Dogname::getCourseName() const
{
    return courseName; 
}

void Dogname::displayMessage() const
{
    cout << "�����W�r�O: " << courseName << "!" << endl;
}

