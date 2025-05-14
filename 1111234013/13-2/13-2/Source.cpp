#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// 列舉型態：BMI 分類
enum BMICategory {
    SLIM, NORMAL, HEAVY, FAT, TOOFAT
};

int main() {
    const int SIZE = 3;
    struct employee {
        string name;
        int height;
        int weight;
    };

    struct employee member[SIZE];

    // 輸入
    cout << "請輸入 " << SIZE << " 位員工的姓名、身高(公分)、體重(公斤)：\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "\n第 " << (i + 1) << " 位員工：\n";
        cout << "姓名：";
        cin >> member[i].name;
        cout << "身高(公分)：";
        cin >> member[i].height;
        cout << "體重(公斤)：";
        cin >> member[i].weight;
    }

    // 處理 BMI 與分類
    for (int i = 0; i < SIZE; i++) {
        float bmi = member[i].weight / pow(member[i].height / 100.0, 2);
        BMICategory category;

        // 判斷 BMI 分類
        if (bmi < 18.5)
            category = SLIM;
        else if (bmi < 24)
            category = NORMAL;
        else if (bmi < 27)
            category = HEAVY;
        else if (bmi < 30)
            category = FAT;
        else
            category = TOOFAT;

        // 輸出
        cout << "\n姓名：" << member[i].name
            << "\tBMI：" << bmi
            << "\t體重狀態：";

        switch (category) {
        case SLIM:
            cout << "slim（過輕）";
            break;
        case NORMAL:
            cout << "normal（正常）";
            break;
        case HEAVY:
            cout << "heavy（過重）";
            break;
        case FAT:
            cout << "fat（輕度肥胖）";
            break;
        case TOOFAT:
            cout << "toofat（中重度肥胖）";
            break;
        }

        cout << endl;
    }

    return 0;
}