#include <iostream>
#include <cctype>
using namespace std;

class info
{
private:
    int age = 50;
    char gender = 'F';
public:

    void changeAge(int a)
    {
        age = a;
    }

    int getAge()
    {
        return age;
    }

    void changeGender(char s)
    {
        gender = s;
    }

    char getGender()
    {
        return gender;
    }
};

int main()
{
    info myInfo;
    int age;
    char gender;

    cout << "�~����:" << myInfo.getAge() << endl;
    cout << "�ʧO��:" << myInfo.getGender() << endl;

    cout << "�п�J�~��:";
    cin >> age;
    while (age < 0 or age >= 100) {
        cout << "�~�ֽп�J0-99:";
        cin >> age;
    }
    myInfo.changeAge(age);
        

    cout << "�п�J�ʧO:";
    cin >> gender;
    while (islower(gender)) {
        cout << "�п�J�j�g(M/F):";
        cin >> gender;
    }
    myInfo.changeGender(gender);

    cout << "�~����:" << myInfo.getAge() << endl;
    cout << "�ʧO��:" << myInfo.getGender() << endl;
}