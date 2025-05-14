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
    cout << "請輸入人數";
    cin >> count;
    employee* member = new employee[count];
    int hei, wei;
    string name;
    for (int i = 0; i < count; i++) {
        cout << "請輸入名字: ";
        cin >> member[i].name;
        cout << "請輸入身高: ";
        cin >> member[i].height;
        cout << "請輸入體重 ";
        cin >> member[i].weight;
    }
    float bmi;  // bmi：身體質量指數
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
        cout << data[i].name << "的體重=" << data[i].weight
            << "\tBMI=" << bmi << "\t";
        switch (mbmi) {
        case slim:
            cout << "過輕\n";
            break;
        case normal:
            cout << "正常\n";
            break;
        case heavy:
            cout << "過重\n";
            break;
        case fat:
            cout << "肥胖\n";
            break;
        }


        /*if (bmi < 18.5)
            cout << "體重過輕\n";
        else if (bmi < 24)
            cout << "體重在正常範圍\n";
        else if (bmi < 27)
            cout << "體重過重\n";
        else if (bmi < 30)
            cout << "體重輕度肥胖\n";
        else if (bmi < 35)
            cout << "體重中度肥胖\n";
        else
            cout << "體重重度肥胖\n";*/
    }
}