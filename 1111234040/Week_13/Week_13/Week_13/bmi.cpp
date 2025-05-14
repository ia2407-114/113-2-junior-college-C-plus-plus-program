#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// 列舉型態：BMI 分類
enum BMIStatus { SLIM, NORMAL, HEAVY, FAT, TOO_FAT };

// 結構型態：員工資料
struct Employee {
    string name;
    int height;
    int weight;
};

// 函式原型
float calculateBMI(int height, int weight);
BMIStatus getBMIStatus(float bmi);
void printBMIResult(const Employee& emp, float bmi, BMIStatus status);

int main() {
    int count;
    cout << "請輸入人數: ";
    cin >> count;
    cin.ignore(); // 清除換行符號

    Employee* members = new Employee[count];

    // 資料輸入
    for (int i = 0; i < count; ++i) {
        cout << "\n輸入第 " << i + 1 << " 位員工資料:\n";
        cout << "姓名: ";
        getline(cin, members[i].name);
        cout << "身高 (cm): ";
        cin >> members[i].height;
        cout << "體重 (kg): ";
        cin >> members[i].weight;
        cin.ignore(); // 清除換行
    }

    // BMI 計算與輸出
    cout << "\n======= 結果 =======\n";
    for (int i = 0; i < count; ++i) {
        float bmi = calculateBMI(members[i].height, members[i].weight);
        BMIStatus status = getBMIStatus(bmi);
        printBMIResult(members[i], bmi, status);
    }

    delete[] members; // 釋放記憶體
    return 0;
}

// 計算 BMI
float calculateBMI(int height, int weight) {
    return weight / pow(height / 100.0, 2);
}

// 根據 BMI 傳回列舉類別
BMIStatus getBMIStatus(float bmi) {
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

// 根據狀態印出對應文字
void printBMIResult(const Employee& emp, float bmi, BMIStatus status) {
    cout << emp.name << " 的 BMI 為 " << bmi << "，分類為：";

    switch (status) {
    case SLIM:     cout << "體重過輕 (slim)"; break;
    case NORMAL:   cout << "正常體重 (normal)"; break;
    case HEAVY:    cout << "體重過重 (heavy)"; break;
    case FAT:      cout << "輕度肥胖 (fat)"; break;
    case TOO_FAT:  cout << "中重度肥胖 (toofat)"; break;
    }
    cout << endl;
}
