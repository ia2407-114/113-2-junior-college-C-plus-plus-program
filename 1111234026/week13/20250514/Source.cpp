#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct employee {
    string name;
    int height; 
    int weight; 
};

enum {
    slim,
    normal,
    heavy,
    fat,
    nocomment
};

int bmicompute(employee person, float& bmi);

int main() {
    employee person;
    float bmi;
    int code;

    cout << "�п�J�m�W�G";
    getline(cin, person.name);
    cout << "�п�J���� (cm)�G";
    cin >> person.height;
    cout << "�п�J�魫 (kg)�G";
    cin >> person.weight;

    code = bmicompute(person, bmi);

    cout << "�m�W�G" << person.name << endl;
    cout << "BMI�G" << bmi << endl;
    cout << "�����q�����G";

    switch (code) {
    case slim:   cout << "�L�G"; break;
    case normal: cout << "���`"; break;
    case heavy:  cout << "�L��"; break;
    case fat:    cout << "�έD"; break;
    default:     cout << "�L�k����"; break;
    }

    cout << endl;
    return 0;
}
int bmicompute(employee person, float& bmi) {
    bmi = person.weight / pow(person.height / 100.0, 2);

    if (bmi < 18.5)
        return slim;
    else if (bmi < 24)
        return normal;
    else if (bmi < 27)
        return heavy;
    else if (bmi < 30)
        return fat;
}