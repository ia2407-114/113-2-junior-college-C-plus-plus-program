#include <iostream>
#include <string>
using namespace std;

class Dog
{
public:
    explicit Dog(string name, int year)
    {
        if (year > 20 || year < 0)
            cout << "�~�֤��X�z" << endl;
        else if (name == "")
        {            
            cout << "����J" << endl;
        }
        else
            dogName = name;
            dogAge = year;

    }

    void setYearOld(int year)
    {
        if (year > 20 || year < 0)
            cout << "�~�֤��X�z" << endl;
        else
            dogAge = year;
    }

    void setName(string name)
    {
        if (name =="")
            cout << "����J" << endl;
        else
            dogName = name;
    }

    string getName() const
    {
        return dogName;
    }

    void displayMessage() const
    {
        cout << "�w��Ө쪯�� " << getName() << " ���@�ɡA�e���~�֬O " << dogAge << " ���I" << endl;
    }

private:
    int dogAge =0;
    string dogName ="";
};

int main()
{
    string nameOfDog;
    int ageOfDog;

    cout << "�п�J�������W�r:" << endl;
    getline(cin, nameOfDog);

    cout << "�п�J�������~��:" << endl;
    cin >> ageOfDog;

    Dog myDog(nameOfDog, ageOfDog);

    cout << "\n�����H���p�U:" << endl;
    myDog.displayMessage();

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
