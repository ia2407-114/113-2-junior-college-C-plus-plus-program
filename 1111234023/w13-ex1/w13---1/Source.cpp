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
    cout << "\n姓名: " << person.name << endl;
    cout << "身高: " << person.height << " cm" << endl;
    cout << "體重: " << person.weight << " kg" << endl;
    cout << "BMI: " << bmi << endl;

    BMI status = getBMI(bmi);
    cout << "身體質量狀況: ";
    switch (status) {
    case slim:
        cout << "體重過輕" << endl;
        break;
    case normal:
        cout << "正常體重 " << endl;
        break;
    case heavy:
        cout << "過重 " << endl;
        break;
    case fat:
        cout << "輕度肥胖 " << endl;
        break;
    case toofat:
        cout << "中度或重度肥胖 " << endl;
        break;
    }
}

int main() {
    employee user;
    cout << "請輸入姓名: ";
    getline(cin, user.name);
    cout << "請輸入身高: ";
    cin >> user.height;
    cout << "請輸入體重: ";
    cin >> user.weight;

    bmicompute(user);

    return 0;
}