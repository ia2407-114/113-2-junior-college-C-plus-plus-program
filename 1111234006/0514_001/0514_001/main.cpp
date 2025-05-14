/*題目1:請參考上面兩個程式碼，將上一個程式修改為:
(1) 透過鍵盤輸入姓名、體重、身高
(2) 參考上上程式，加入列舉型態與switch指令，列印出使用者的姓名、BMI、
    身體質量程度(slim,normal,heavy,fat,toofat)*/
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// 員工資料結構
struct employee {
    string name = "";
    int height = 0;
    int weight = 0;
};

// 列舉型態：（使用 enum class）
enum class BMIStatus {
    slim,
    normal,
    heavy,
    fat,
    toofat
};

// 判斷 BMI 狀態
BMIStatus getBMIStatus(float bmi);

int main() {
    employee person;

    // 輸入資料
    cout << "請輸入姓名：";
    cin >> person.name;
    cout << "請輸入身高（cm）：";
    cin >> person.height;
    cout << "請輸入體重（kg）：";
    cin >> person.weight;

    // 計算 BMI
    float bmi = person.weight / pow(person.height / 100.0, 2);

    // 判斷 BMI 狀態
    BMIStatus status = getBMIStatus(bmi);

    // 顯示結果
    cout << "\n" << person.name << " 的 BMI 為 " << bmi << "，身體質量程度為：";

    // 用 switch 判斷列舉結果
    switch (status) {
    case BMIStatus::slim:
        cout << "slim（過輕）" << endl;
        break;
    case BMIStatus::normal:
        cout << "normal（正常）" << endl;
        break;
    case BMIStatus::heavy:
        cout << "heavy（過重）" << endl;
        break;
    case BMIStatus::fat:
        cout << "fat（輕度肥胖）" << endl;
        break;
    case BMIStatus::toofat:
        cout << "toofat（中度或重度肥胖）" << endl;
        break;
    default:
        cout << "未知狀態" << endl;
    }

    return 0;
}

// 回傳 BMI 對應的列舉狀態
BMIStatus getBMIStatus(float bmi) {
    if (bmi < 18.5)
        return BMIStatus::slim;
    else if (bmi < 24)
        return BMIStatus::normal;
    else if (bmi < 27)
        return BMIStatus::heavy;
    else if (bmi < 30)
        return BMIStatus::fat;
    else
        return BMIStatus::toofat;
}
