#include <iostream>
#include "Pet.h"
using namespace std;

int main() {
    string fName, lName;
    int bMonth, bDay, bYear, aMonth, aDay, aYear;

    cout << "請輸入寵物姓氏：";
    cin >> lName;
    cout << "請輸入寵物名字：";
    cin >> fName;

    cout << "請輸入生日 (月 日 年)：";
    cin >> bMonth >> bDay >> bYear;

    cout << "請輸入領養日 (月 日 年)：";
    cin >> aMonth >> aDay >> aYear;

    Date birthday(bMonth, bDay, bYear);
    Date adoptday(aMonth, aDay, aYear);

    Pet pet(birthday, adoptday);
    pet.setLastName(lName).setFirstName(fName);
}