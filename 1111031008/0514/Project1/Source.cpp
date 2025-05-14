#include <iostream>
#include <string>
#include <iomanip> // 控制小數點

using namespace std;

enum BodyType {
    SLIM,
    NORMAL,
    HEAVY,
    FAT,
    TOOFAT
};

BodyType getBodyType(float bmi) {
    if (bmi < 18.5)
        return SLIM;
    else if (bmi < 24)
        return NORMAL;
    else if (bmi < 27)
        return HEAVY;
    else if (bmi < 30)
        return FAT;
    else
        return TOOFAT;
}

int main() {
    string name;
    float weight, height_cm, height_m, bmi;
    BodyType type;

    // 輸入資料
    cout << "請輸入姓名: ";
    getline(cin, name);

    cout << "請輸入體重 (公斤): ";
    cin >> weight;

    cout << "請輸入身高 (公分): ";
    cin >> height_cm;

    // 將公分轉為公尺
    height_m = height_cm / 100.0f;

    // 計算 BMI
    bmi = weight / (height_m * height_m);
    type = getBodyType(bmi);

    // 顯示結果
    cout << "\n===== 健康狀況分析 =====\n";
    cout << "姓名: " << name << endl;
    cout << "BMI: " << fixed << setprecision(2) << bmi << endl;
    cout << "身體質量程度: ";

    switch (type) {
    case SLIM:
        cout << "體重過輕\n" << endl;
        break;
    case NORMAL:
        cout << "體重在正常範圍\n" << endl;
        break;
    case HEAVY:
        cout << "體重過重\n" << endl;
        break;
    case FAT:
        cout << "體重輕度肥胖\n" << endl;
        break;
    case TOOFAT:
        cout << "體重中度肥胖\n";
        cout << "體重重度肥胖\n"; 
        break;
    }

    return 0;
}
