#include <iostream>
#include <string>
#include "Dog.h"
using namespace std;

int main()
{
    string dogName;
    int age;
    Dog myDog("Chad", 15);
    cout << "�w�]" << endl;
    myDog.displayMessage();
    cout << "\n�п�J�����W��:";
    getline(cin, dogName);
    cout << "\n�п�J�����~��:";
    cin >> age;
    myDog.setInfo(dogName, age);
    cout << endl;
    myDog.displayMessage();
}