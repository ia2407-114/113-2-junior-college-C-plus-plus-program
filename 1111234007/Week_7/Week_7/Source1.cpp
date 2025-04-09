#include <iostream>
#include <string>
#include "Dog.h"
using namespace std;

int main()
{
    string dogName;
    int age;
    Dog myDog("Chad", 15);
    cout << "預設" << endl;
    myDog.displayMessage();
    cout << "\n請輸入狗的名稱:";
    getline(cin, dogName);
    cout << "\n請輸入狗的年齡:";
    cin >> age;
    myDog.setInfo(dogName, age);
    cout << endl;
    myDog.displayMessage();
}