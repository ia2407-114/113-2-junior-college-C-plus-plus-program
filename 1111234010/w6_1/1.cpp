#include <iostream>
#include <string>
using namespace std;

class Dog {
private:
    string name;
    int age;

public:
    // �]�w�W�r�P�~�֪���� (set)
    void setNameAndAge(string dogName, int dogAge) {
        if (dogAge < 20) {  // �~�֦X�z���ˬd
            name = dogName;
            age = dogAge;
        }
        else {
            cout << "�~�ֶW�L�X�z�d��A�п�J�X�z���~�֡]�p��20���^�C" << endl;
        }
    }

    // ���o�W�r����� (get)
    string getName() {
        return name;
    }

    // ���o�~�֪���� (get)
    int getAge() {
        return age;
    }

    // �C�L�W�r�P�~�֪����
    void printDogInfo() {
        cout << "�����W�r: " << name << endl;
        cout << "�����~��: " << age << " ��" << endl;
    }
};

int main() {
    Dog myDog;
    string dogName;
    int dogAge;

    cout << "�п�J�d�������W�r: ";
    cin >> dogName;
    cout << "�п�J�d�������~��: ";
    cin >> dogAge;

    myDog.setNameAndAge(dogName, dogAge);
    myDog.printDogInfo();  // ��ܪ����W�r�P�~��

    return 0;
}
