/*dog.cpp 0402�D��1. */
#include <iostream>   
#include <string>   
#include "Dog.h"      
using namespace std;  

// Dog ���O���غc�l�G��l�ƪ����W�ٻP�~��
Dog::Dog(string Name, int Age)
{
	name = Name;   // �N�Ƕi�Ӫ��W�ٳ]�w�����󪺦����ܼ� name
	age = Age;     // �N�Ƕi�Ӫ��~�ֳ]�w�������ܼ� age
}

// setInfo�G�]�w�����W�ٻP�~��
void Dog::setInfo(string Name, int Age)
{
	// �p�G�~�֦b 0 �� 20 �������~�]�w�A�_�h��ܿ��~�T��
	if (Age > 0 && Age < 20) {
		name = Name;
		age = Age;
	}
	else {
		cout << "�п�J20���H��" << endl;  // �~�֤��X�k�A���ܿ��~
	}

	// �p�G�W�٪��פ��W�L 10�A�N�]�w�W�r
	if (Name.size() <= 10)
	{
		name = Name;
	}
	// �p�G�W�٪��׬O 0�A��ܡu�L�ġv
	else if (Name.size() == 0)
	{
		cout << "�L��" << endl;
	}
	// �p�G�W�٤Ӫ��A�I���e 10 �Ӧr��
	else
		name = Name.substr(0, 10);  // substr(0, 10)�G(�q���}�l�A���X�Ӧr)
}

// getName�G���o�����W�١]�^�� name�^
string Dog::getName() const
{
	return name;
}

// getAge�G���o�����~�֡]�^�� age�^
int Dog::getAge() const
{
	return age;
}

// displayMessage�G��ܪ������W�ٻP�~��
void Dog::displayMessage() const
{
	cout << "���W��:" << getName() << endl   // �I�s getName ��ܦW��
		 << "���~��:" << getAge() << endl;   // �I�s getAge ��ܦ~��
}
