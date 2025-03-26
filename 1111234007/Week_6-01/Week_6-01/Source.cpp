//�D��1: �إߤ@�ӥi�H���ϥΪ̳z�L��L��J�B�]�w(set)�H�Ψ��o(get)�d�������W�r(string name)�Φ~��(int age)��C++�{���A�{���X�ݺ���:
//1.�n���]�w(set)�B���o(get)�B�C�L����k(�������)
//2.�]�w(set)������Ƹ̻ݧP�_�����~�֬O�_�X�z(< 20)
//�D��2: �ӤW�D�A�ШϥΫغc�l(constructor)�إߤ@���d�������O�A�i�H���ϥΪ̦b�ŧi�s������(�d����)�ɡA
//�����W�r�P�~�֡A�åi�z�L��L��J�á��������]�w�d�����ݩ�(�m�W�B�~��)���{���C
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
    Dog myDog("youan", 6);

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