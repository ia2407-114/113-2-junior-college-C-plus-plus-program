#ifndef PET_H
#define PET_H

#include <iostream>
#include <string>
using namespace std;

class Pet {
public:
    explicit Pet(string name); // �غc�l
    void setName(string name); // �]�w�d���m�W
    string getName() const;    // ���o�d���m�W
    void displayMessage() const; // ����w��T��

private:
    string petName; // �p���ܼ�: �d�����W�r
};

#endif