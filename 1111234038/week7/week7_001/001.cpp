#include "Dog.h"

int main()
{
    string dogName;
    int age;
    Dog myDog("peggy", 1);

    cout << "�w�]���" << endl;
    myDog.displayMessage();

    cout << "\n�п�J�������W��:";
    getline(cin, dogName);
    cout << "\n�п�J�������~��:";
    cin >> age;
    myDog.setInfo(dogName, age);

    cout << endl;
    myDog.displayMessage();

    return 0;
}

