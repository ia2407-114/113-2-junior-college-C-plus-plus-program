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

    cout << "年紀為:" << myInfo.getAge() << endl;
    cout << "性別為:" << myInfo.getGender() << endl;

    cout << "請輸入年紀:";
    cin >> age;
    while (age < 0 or age >= 100) {
        cout << "年齡請輸入0-99:";
        cin >> age;
    }
    myInfo.changeAge(age);
        

    cout << "請輸入性別:";
    cin >> gender;
    while (islower(gender)) {
        cout << "請輸入大寫(M/F):";
        cin >> gender;
    }
    myInfo.changeGender(gender);

    cout << "年紀為:" << myInfo.getAge() << endl;
    cout << "性別為:" << myInfo.getGender() << endl;
}