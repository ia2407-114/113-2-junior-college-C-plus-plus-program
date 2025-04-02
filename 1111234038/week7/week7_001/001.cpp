#include "Dog.h"

int main()
{
    string dogName;
    int age;
    Dog myDog("peggy", 1);

    cout << "預設資料" << endl;
    myDog.displayMessage();

    cout << "\n請輸入狗狗的名稱:";
    getline(cin, dogName);
    cout << "\n請輸入狗狗的年齡:";
    cin >> age;
    myDog.setInfo(dogName, age);

    cout << endl;
    myDog.displayMessage();

    return 0;
}

