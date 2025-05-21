#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void bmi_compute(struct employee, int);

enum BMI
{
    slim, normal, heavy, fat, toofat
};

struct employee
{
    string name;
    int  height;
    int  weight;
};

int main()
{
    employee person;

    cout << "請輸入姓名: ";
    getline(cin, person.name);

    cout << "請輸入 身高 體重 : ";
    cin >> person.height >> person.weight;

    bmi_compute(person, 3);
    return 0;
}

void bmi_compute(struct employee data, int size)
{
    float bmi;
    int range;

    bmi = data.weight / pow(data.height / 100.0, 2);
    cout << data.name << "的身高= " << data.height 
        << "\t體重= " << data.weight << "\tBMI=" << bmi;

    if (bmi < 18.5)
        range = 0;
    else if (bmi < 24)
        range = 1;
    else if (bmi < 27)
        range = 2;
    else if (bmi < 30)
        range = 3;
    else if (bmi < 35)
        range = 4;

    switch (range)
    {
    case slim:
        cout << "\n體重過輕\n";
        break;
    case normal:
        cout << "\n體重正常\n";
        break;
    case heavy:
        cout << "\n體重稍重\n";
        break;
    case fat:
        cout << "\n體重過重\n";
        break;
    case toofat:
        cout << "\n體重嚴重肥胖\n";
        break;
    default:
        cout << "查無資料...";
        break;
    }
}