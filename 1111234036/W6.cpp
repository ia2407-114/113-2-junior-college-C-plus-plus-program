#include <iostream>
#include <string>
using namespace std;


class Dog
{
private:
    string name;
    int age;

public:
    Dog(string n, int a) {
        name = n;
        age = a;
    }

    void setInfo(string n, int a)
    {
        if (a > 0 && a < 20) {
            name = n;
            age = a;
        }
        else {
            cout << "無效的年齡!請輸入0-20" << endl;
        }
    }

    string getName() const
    {
        return name;
    }

    int getAge() const
    {
        return age;
    }

    void displayMessage() const
    {
        cout << "狗狗名稱:" << getName() << endl
            << "狗狗年齡:" << getAge() << endl;
    }
};

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
}