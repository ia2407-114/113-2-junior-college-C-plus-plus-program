#include <iostream>
#include <string>
#include <cmath>

using namespace std;

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

void bmi_compute(struct employee, int);

int main()
{
    employee person;

    cout << "�п�J�m�W: ";
    getline(cin, person.name);

    cout << "�п�J ���� �魫 : ";
    cin >> person.height >> person.weight;

    bmi_compute(person, 3);

    return 0;
}

void bmi_compute(struct employee data, int size)
{
    float bmi; 
    int range;

    bmi = data.weight / pow(data.height / 100.0, 2);
    cout << data.name << " ���魫= " << data.weight
        << "\tBMI=" << bmi << '\t' << "����= " << data.height;

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
        cout << "\n�魫�L��\n";
        break;
    case normal:
        cout << "\n�魫���`\n";
        break;
    case heavy:
        cout << "\n�魫�y��\n";
        break;
    case fat:
        cout << "\n�魫�L��\n";
        break;
    case toofat:
        cout << "\n�魫�Y���έD\n";
        break;
    default:
        cout << "�d�L���...";
        break;
    }
}