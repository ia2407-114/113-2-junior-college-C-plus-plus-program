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
employee member[3] = {};
enum {
    slim, normal, heavy, fat, toofat
};

int main()
{
    int i, range;

    for (i = 0; i < 3; i++) {
        cout << "�п�J�m�W�G";
        cin >> member[i].name;

        cout << "�п�J�����G";
        cin >> member[i].height;

        cout << "�п�J�魫�G";
        cin >> member[i].weight;
    }

    float bmi;
    bmicompute(member, 3);

    return 0;
}

void bmicompute(struct employee data[], int size)
{
    int i, bmi_range;
    for (i = 0; i < size; i++)
    {
        float bmi;
        bmi = data[i].weight / pow(data[i].height / 100.0, 2);
        cout << data[i].name << "���魫=" << data[i].weight
            << "\tBMI=" << bmi << '\t';

        if (bmi < 18.5)
            bmi_range = 0;
        else if (bmi < 24)
            bmi_range = 1;
        else if (bmi < 27)
            bmi_range = 2;
        else if (bmi < 30)
            bmi_range = 3;
        else if (bmi < 35)
            bmi_range = 4;

        switch (bmi_range)
        {
        case slim:
            cout << member[i].name << "�魫�L��(slim)\n";
            break;
        case normal:
            cout << member[i].name << "�魫�b���`�d��(normal)\n";
            break;

        case heavy:
            cout << member[i].name << "�魫�L��(heavy)\n";
            break;

        case fat:
            cout << member[i].name << "�魫���תέD(fat)\n";
            break;

        case toofat:
            cout << member[i].name << "�魫���תέD(toofat)\n";
            break;

        }
    }
}