#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct employee {
    string name;
    int height;
    int weight;
};

enum BMI { slim, normal, heavy, fat, toofat };

BMI getBMI(float bmi) {
    if (bmi < 18.5)
        return slim;
    else if (bmi < 24)
        return normal;
    else if (bmi < 27)
        return heavy;
    else if (bmi < 30)
        return  fat;
    else
        return toofat;
}

void bmicompute(employee person) {
    float bmi = person.weight / pow(person.height / 100.0, 2);
    cout << "\n�m�W: " << person.name << endl;
    cout << "����: " << person.height << " cm" << endl;
    cout << "�魫: " << person.weight << " kg" << endl;
    cout << "BMI: " << bmi << endl;

    BMI status = getBMI(bmi);
    cout << "�����q���p: ";
    switch (status) {
    case slim:
        cout << "�魫�L��" << endl;
        break;
    case normal:
        cout << "���`�魫 " << endl;
        break;
    case heavy:
        cout << "�L�� " << endl;
        break;
    case fat:
        cout << "���תέD " << endl;
        break;
    case toofat:
        cout << "���שέ��תέD " << endl;
        break;
    }
}

int main() {
    employee user;
    cout << "�п�J�m�W: ";
    getline(cin, user.name);
    cout << "�п�J����: ";
    cin >> user.height;
    cout << "�п�J�魫: ";
    cin >> user.weight;

    bmicompute(user);

    return 0;
}