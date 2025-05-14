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
    //employee member[3] = { {"�i�T", 168, 55}, {"����", 179, 53},{"���|", 160, 62} };
    string na;
    int wei, hei;

    cout << "��J�m�W" << endl;
    cin >> na;
    cout << "��J�����P�魫" << endl;
    cin >> hei >> wei;
    employee member[1] = { na,hei,wei };
    bmicompute(member, 1);

    return 0;
}

void bmicompute(struct employee data[], int size)
{
    enum {
        slim,
        normal,
        heavy,
        fat,
        toofat,
        superfat,
    };
    int bmitype = 0;

    int i;
    for (i = 0; i < size; i++)
    {
        float bmi;
        bmi = data[i].weight / pow(data[i].height / 100.0, 2);

        if (bmi < 18.5)
            bmitype = slim;
        else if (bmi < 24)
            bmitype = normal;
        else if (bmi < 27)
            bmitype = heavy;
        else if (bmi < 30)
            bmitype = fat;
        else if (bmi < 35)
            bmitype = toofat;
        else
            bmitype = superfat;
    }
    cout << bmitype << endl;
    switch (bmitype) {
        case slim:
            cout << "�魫�L��" << endl;
            break;
        case normal:
            cout << "�魫���`" << endl;
            break;
        case heavy:
            cout << "�魫�L��" << endl;
            break;
        case fat:
            cout << "�魫���תέD" << endl;
            break;
        case toofat:
            cout << "�魫���תέD" << endl;
            break;
        case superfat:
            cout << "�魫���תέD" << endl;
            break;
    }
    cout << heavy << endl;
}