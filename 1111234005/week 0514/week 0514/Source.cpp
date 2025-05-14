#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct employee {
    string name;
    int height;  // 公分
    int weight;  // 公斤
};


enum BMILevel {
    SLIM, NORMAL, HEAVY, FAT, TOO_FAT
};

void bmicompute(struct employee[], int);
BMILevel getBMILevel(float bmi); // 回傳列舉值

int main() {
    int num;
    cout << "請輸入員工人數：";
    cin >> num;
    cin.ignore();  // 忽略換行符，避免影響 getline()

    employee* member = new employee[num]; 

    for (int i = 0; i < num; ++i) {
        cout << "輸入第 " << i + 1 << " 位員工的姓名：";
        getline(cin, member[i].name);

        cout << "輸入身高（公分）：";
        cin >> member[i].height;

        cout << "輸入體重（公斤）：";
        cin >> member[i].weight;

        cin.ignore();  
    }

    bmicompute(member, num);

    delete[] member;  
    return 0;
}


BMILevel getBMILevel(float bmi) {
    if (bmi < 18.5)
        return SLIM;
    else if (bmi < 24)
        return NORMAL;
    else if (bmi < 27)
        return HEAVY;
    else if (bmi < 30)
        return FAT;
    else
        return TOO_FAT;
}


void bmicompute(struct employee data[], int size) {
    for (int i = 0; i < size; i++) {
        float bmi = data[i].weight / pow(data[i].height / 100.0, 2);
        BMILevel level = getBMILevel(bmi);

        cout << data[i].name << " 的體重 = " << data[i].weight
            << " 公斤\tBMI = " << bmi << "\t";

        switch (level) {
        case SLIM:
            cout << "體重分類：slim（體重過輕）\n";
            break;
        case NORMAL:
            cout << "體重分類：normal（正常範圍）\n";
            break;
        case HEAVY:
            cout << "體重分類：heavy（體重過重）\n";
            break;
        case FAT:
            cout << "體重分類：fat（輕度肥胖）\n";
            break;
        case TOO_FAT:
            cout << "體重分類：toofat（中/重度肥胖）\n";
            break;
        }
    }
}
