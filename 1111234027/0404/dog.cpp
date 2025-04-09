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
            cout << "無效的名稱" << endl;
        }
        else {
            name = n.substr(0, 10);
            age = a;
        }
    }
    else {
        cout << "無效的年齡!請輸入0-20" << endl;
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
    cout << "狗狗名稱:" << getName() << endl
        << "狗狗年齡:" << getAge() << endl;
}