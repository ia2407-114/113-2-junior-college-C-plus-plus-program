#include <string>
#include <cmath>
#include <iostream>
using namespace std;
struct employee
{
    string name;
    int  height;
    int  weight;
};
enum BMI
{
    slim,
    normal,
    heavy,
    fat,
    toofat
};

void bmicompute(struct employee[], int);

int main()
{
    employee person;
    cout << "�m�W:";
    cin >> person.name;
    cout << "�魫:";
    cin >> person.weight;
    cout << "����:";
    cin >> person.height;
    employee people[1] = { person };
    float bmi;  // bmi�G�����q����
    bmicompute(people, 1);
    return 0;
}

void bmicompute(struct employee data[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        float bmi = data[i].weight / pow(data[i].height / 100.0, 2);
        cout << data[i].name << "���魫��=" << data[i].weight << "kg\t" << "������=" << data[i].height << "\n"
            << "\tBMI=" << bmi << '\t';

        BMI type{};

        if (bmi < 18.5)
            type = slim;
        else if (bmi < 24)
            type = normal;
        else if (bmi < 27)
            type = heavy;
        else if (bmi < 30)
            type = fat;
        else if (bmi < 35)
            type = toofat;

        switch (type)
        {
        case slim:
            cout << "�魫�L��\n";
            break;
        case normal:
            cout << "�魫�b���`�d��\n";
            break;
        case heavy:
            cout << "�魫�L��\n";
            break;
        case fat:
            cout << "�魫���תέD\n";
            break;
        case toofat:
            cout << "�魫���תέD\n";
            break;
        }
    }
}