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
            cout << "�п�J20���H��" << endl;
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
        cout << "���W��:" << getName() << endl
            << "���~��:" << getAge() << endl;
    }
};

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
