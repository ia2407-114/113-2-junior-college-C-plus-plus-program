//�D��1. �Q�ΤW�@�����D��2�A�N�d�����O�P�D�{�������A�åB�N���O�������P��@�b����������ɮסA�åB�[�H�ק�A���d���W�r���׶W�L10�r���ɡA�h�^���e10�Ӧr����@�L���m�W�A�̫�N�d�����m�W�L�X�C

#ifndef DOGNAME_H
#define DOGNAME_H

#include <string>
using namespace std;

class Dogname
{
public:
    explicit Dogname(string name = "�L�W��"); 
    void setCourseName(string name); 
    string getCourseName() const;   
    void displayMessage() const;   

private:
    string courseName; 
};

#endif
