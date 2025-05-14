/*題目1:請參考上面兩個程式碼，將上一個程式修改為:
(1) 透過鍵盤輸入姓名、體重、身高
(2) 參考上上程式，加入列舉型態與switch指令，列印出使用者的姓名、BMI、身體質量程度(slim, normal, heavy, fat, toofat)*/


#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// 列舉型態：定義
enum BMI_Category {
    SLIM,
    NORMAL,
    HEAVY,
    FAT,
    TOO_FAT
};

// 使用者資料結構
struct Person {
    string name="";
    int height=0; // 公分
    int weight=0; // 公斤
};

// 根據 BMI 值回傳分類
BMI_Category getBMICategory(float bmi) {
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

int main() {
    Person user;

    // 使用者輸入
    cout << "請輸入姓名：";
    getline(cin, user.name);

    cout << "請輸入身高（公分）：";
    cin >> user.height;

    cout << "請輸入體重（公斤）：";
    cin >> user.weight;

    // 計算 BMI
    float bmi = (float)user.weight / (float)pow(user.height / 100.0, 2);

    // 取得 BMI 分類
    BMI_Category category = getBMICategory(bmi);

    // 輸出結果
    cout << "\n【結果】\n";
    cout << "姓名：" << user.name << endl;
    cout << "BMI：" << bmi << endl;
    cout << "身體狀況：";

    // 顯示中文分類
    switch (category) {
    case SLIM:
        cout << "體重過輕" << endl;
        break;
    case NORMAL:
        cout << "體重正常" << endl;
        break;
    case HEAVY:
        cout << "體重過重" << endl;
        break;
    case FAT:
        cout << "體重輕度肥胖" << endl;
        break;
    case TOO_FAT:
        cout << "體重過度肥胖" << endl;
        break;
    default:
        cout << "無法判斷" << endl;
    }

    return 0;
}
