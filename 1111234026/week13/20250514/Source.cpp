#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct employee {
    string name;
    int height; 
    int weight; 
};

enum {
    slim,
    normal,
    heavy,
    fat,
    nocomment
};

int bmicompute(employee person, float& bmi);

int main() {
    employee person;
    float bmi;
    int code;

    cout << "請輸入姓名：";
    getline(cin, person.name);
    cout << "請輸入身高 (cm)：";
    cin >> person.height;
    cout << "請輸入體重 (kg)：";
    cin >> person.weight;

    code = bmicompute(person, bmi);

    cout << "姓名：" << person.name << endl;
    cout << "BMI：" << bmi << endl;
    cout << "身體質量分類：";

    switch (code) {
    case slim:   cout << "過瘦"; break;
    case normal: cout << "正常"; break;
    case heavy:  cout << "過重"; break;
    case fat:    cout << "肥胖"; break;
    default:     cout << "無法分類"; break;
    }

    cout << endl;
    return 0;
}
int bmicompute(employee person, float& bmi) {
    bmi = person.weight / pow(person.height / 100.0, 2);

    if (bmi < 18.5)
        return slim;
    else if (bmi < 24)
        return normal;
    else if (bmi < 27)
        return heavy;
    else if (bmi < 30)
        return fat;
}