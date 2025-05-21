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
        cout << "請輸入姓名：";
        cin >> member[i].name;

        cout << "請輸入身高：";
        cin >> member[i].height;

        cout << "請輸入體重：";
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
        cout << data[i].name << "的體重=" << data[i].weight
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
            cout << member[i].name << "體重過輕(slim)\n";
            break;
        case normal:
            cout << member[i].name << "體重在正常範圍(normal)\n";
            break;

        case heavy:
            cout << member[i].name << "體重過重(heavy)\n";
            break;

        case fat:
            cout << member[i].name << "體重輕度肥胖(fat)\n";
            break;

        case toofat:
            cout << member[i].name << "體重中度肥胖(toofat)\n";
            break;

        }
    }
}