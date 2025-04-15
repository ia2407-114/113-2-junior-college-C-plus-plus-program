#include <iostream>
#include <string>
using namespace std;
class Dog
{
private:
    string name;
    int age;

public:
    Dog(string Name, int Age)
    {
        name = Name;
        age = Age;
    }
    void setInfo(string Name, int Age)
    {
        if (Age > 0 && Age < 20) {
            name = Name;
            age = Age;
        }
        else {
            cout << "請輸入20歲以內" << endl;
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
        cout << "狗名稱:" << getName() << endl
            << "狗年齡:" << getAge() << endl;
    }
};

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
