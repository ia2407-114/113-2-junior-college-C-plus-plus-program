#include <iostream>
#include <string>
#include"Dog.h"
using namespace std;


int main()
{
    string nameOfDog;
    int ageOfDog;

   // cout << "請輸入狗狗的名字:" << endl;
    //getline(cin, nameOfDog);

    //cout << "請輸入狗狗的年齡:" << endl;
    //cin >> ageOfDog;

    Dog myDog;

   // cout << "\n狗狗信息如下:" << endl;
   // myDog.displayMessage();

    cout << "\n請輸入狗狗名字:" << endl;
    cin.ignore();
    getline(cin, nameOfDog);
    myDog.setName(nameOfDog);

    cout << "請輸入狗狗年齡:" << endl;
    cin >> ageOfDog;
    myDog.setYearOld(ageOfDog);

    cout << "\n修改後的狗狗信息如下:" << endl;
    myDog.displayMessage();

    return 0;
}