#pragma once
#ifndef PET_H
#define PET_H

#include <string>
using namespace std;

class Pet {
public:
    explicit Pet(string name); // �غc���
    void setName(string name); // �]�w�d���m�W
    string getName() const;    // ����d���m�W
private:
    string name; // �d�����m�W
};

#endif

