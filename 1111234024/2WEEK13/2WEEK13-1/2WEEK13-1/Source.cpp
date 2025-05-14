//題目1:請參考上面兩個程式碼，將上一個程式修改為:
//(1) 透過鍵盤輸入姓名、體重、身高
//(2) 參考上上程式，加入列舉型態與switch指令，列印出使用者的姓名、BMI、身體質量程度(slim, normal, heavy, fat, toofat)
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
    cout << "姓名:";
    cin >> person.name;
    cout << "體重:";
    cin >> person.weight;
    cout << "身高:";
    cin >> person.height;
    employee people[1] = { person };
    float bmi;
    bmicompute(people, 1);
    return 0;
}
void bmicompute(struct employee data[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        float bmi = data[i].weight / pow(data[i].height / 100.0, 2);
        cout << data[i].name << "的體重為=" << data[i].weight << "kg\n" << "身高為=" << data[i].height << "cm\n"
            << "BMI為=" << bmi << '\n';        
        BMI type;
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
            cout << "體重過輕\n";
            break;
        case normal:
            cout << "體重在正常範圍\n";
            break;
        case heavy:
            cout << "體重過重\n";
            break;
        case fat:
            cout << "體重輕度肥胖\n";
            break;
        case toofat:
            cout << "體重中度肥胖\n";
            break;
        }
    }
}