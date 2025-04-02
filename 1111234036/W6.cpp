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
            cout << "�L�Ī��~��!�п�J0-20" << endl;
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
        cout << "�����W��:" << getName() << endl
            << "�����~��:" << getAge() << endl;
    }
};

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
}