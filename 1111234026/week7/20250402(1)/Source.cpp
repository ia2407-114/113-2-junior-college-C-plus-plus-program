#include <iostream>
#include <string>
#include"Dog.h"
using namespace std;


int main()
{
    string nameOfDog;
    int ageOfDog;

   // cout << "�п�J�������W�r:" << endl;
    //getline(cin, nameOfDog);

    //cout << "�п�J�������~��:" << endl;
    //cin >> ageOfDog;

    Dog myDog;

   // cout << "\n�����H���p�U:" << endl;
   // myDog.displayMessage();

    cout << "\n�п�J�����W�r:" << endl;
    cin.ignore();
    getline(cin, nameOfDog);
    myDog.setName(nameOfDog);

    cout << "�п�J�����~��:" << endl;
    cin >> ageOfDog;
    myDog.setYearOld(ageOfDog);

    cout << "\n�ק�᪺�����H���p�U:" << endl;
    myDog.displayMessage();

    return 0;
}