#include <iostream>
#include <string>
#include "Dog.h"  // �ޥμ��Y��

//Dog::Dog(string name, int year)
//{
 //   if (year > 20 || year < 0)
//        cout << "�~�֤��X�z" << endl;
//    else if (name == "")
 //   {
 //       cout << "����J" << endl;
 //       dogName = "����";  // �p�G�W�٬��šA�����w�]��
 //   }
//}

void Dog::setYearOld(int year)
{
    if (year > 20 || year < 0)
        cout << "�~�֤��X�z" << endl;
    else
        dogAge = year;
}

void Dog::setName(string name)
{
    if (name.length() > 10) {
        dogName = name.substr(0, 10);  
    }
    else {
        dogName = name;
    }
}

string Dog::getName() const
{
    return dogName;
}

void Dog::displayMessage() const
{
    cout << "�w��Ө쪯�� " << dogName << " ���@�ɡA�e���~�֬O " << dogAge << " ���I" << endl;
}
