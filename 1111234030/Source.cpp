#include <iostream>
#include <string>
#include <cmath>
using namespace std;
struct employee
{
    string name;
    int  height;
    int  weight;
};
void bmicompute(struct employee[], int);

int main()
{
    int count;
    cout << "�п�J�H��";
    cin >> count;
    employee* member = new employee[count];
    int hei, wei;
    string name;
    for (int i = 0; i < count; i++) {
        cout << "�п�J�W�r: ";
        cin >> member[i].name;
        cout << "�п�J����: ";
        cin >> member[i].height;
        cout << "�п�J�魫 ";
        cin >> member[i].weight;
    }
    float bmi;  // bmi�G�����q����
    bmicompute(member, count);

    return 0;
}

void bmicompute(struct employee data[], int size)
{
    enum bmistats{
        slim,
        normal,
        heavy,
        fat,
    };
    int i;
    int mbmi;
    for (i = 0; i < size; i++)
    {
        float bmi;
        bmi = data[i].weight / pow(data[i].height / 100.0, 2);
        if (bmi < 18.5)
            mbmi = slim;
        else if (bmi < 24)
            mbmi = normal;
        else if (bmi < 27)
            mbmi = heavy;
        else
            mbmi = fat;
        cout << data[i].name << "���魫=" << data[i].weight
            << "\tBMI=" << bmi << "\t";
        switch (mbmi) {
        case slim:
            cout << "�L��\n";
            break;
        case normal:
            cout << "���`\n";
            break;
        case heavy:
            cout << "�L��\n";
            break;
        case fat:
            cout << "�έD\n";
            break;
        }


        /*if (bmi < 18.5)
            cout << "�魫�L��\n";
        else if (bmi < 24)
            cout << "�魫�b���`�d��\n";
        else if (bmi < 27)
            cout << "�魫�L��\n";
        else if (bmi < 30)
            cout << "�魫���תέD\n";
        else if (bmi < 35)
            cout << "�魫���תέD\n";
        else
            cout << "�魫���תέD\n";*/
    }
}