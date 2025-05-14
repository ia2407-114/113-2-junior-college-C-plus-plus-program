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
    //employee member[3] = { {"張三", 168, 55}, {"王五", 179, 53},{"李四", 160, 62} };
    string na;
    int wei, hei;

    cout << "輸入姓名" << endl;
    cin >> na;
    cout << "輸入身高與體重" << endl;
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
            cout << "體重過輕" << endl;
            break;
        case normal:
            cout << "體重正常" << endl;
            break;
        case heavy:
            cout << "體重過重" << endl;
            break;
        case fat:
            cout << "體重輕度肥胖" << endl;
            break;
        case toofat:
            cout << "體重中度肥胖" << endl;
            break;
        case superfat:
            cout << "體重重度肥胖" << endl;
            break;
    }
    cout << heavy << endl;
}