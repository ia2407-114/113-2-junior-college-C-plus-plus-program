#include <iostream>
#include <string>
#include "Dog.h"
using namespace std;

Dog::Dog(string n, int a) {
    name = n;
    age = a;
}

void Dog::setInfo(string n, int a)
{
    if (a > 0 && a < 20) {
        if (n.size() <= 10) {
            name = n;
            age = a;
        }
        else if (n.size() == 0) {
            cout << "�L�Ī��W��" << endl;
        }
        else {
            name = n.substr(0, 10);
            age = a;
        }
    }
    else {
        cout << "�L�Ī��~��!�п�J0-20" << endl;
    }
}

string Dog::getName() const
{
    return name;
}

int Dog::getAge() const
{
    return age;
}

void Dog::displayMessage() const
{
    cout << "�����W��:" << getName() << endl
        << "�����~��:" << getAge() << endl;
}