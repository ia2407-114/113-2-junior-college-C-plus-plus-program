#include <iostream>
#include <string>
using namespace std;

class Dog {
private:
    string name;
    int age;

public:
    // �غc�l�A��l�ƦW�r�P�~��
    Dog(string dogName, int dogAge) {
        if (dogAge < 20) {  // �~�֦X�z���ˬd
            name = dogName;
            age = dogAge;
        }
        else {
            name = "����";
            age = 0;
            cout << "�~�ֶW�L�X�z�d��A�w�N�~�ֳ]�� 0�A�W�r�]�� '����'�C" << endl;
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
    string dogName;
    int dogAge;

    cout << "�п�J�d�������W�r: ";
    cin >> dogName;
    cout << "�п�J�d�������~��: ";
    cin >> dogAge;

    Dog myDog(dogName, dogAge);  // �ϥΫغc�l�]�w�����W�r�P�~��
    myDog.printDogInfo();  // ��ܪ����W�r�P�~��

    return 0;
}
