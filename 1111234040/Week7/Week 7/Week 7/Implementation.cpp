#include "dog.h"

// 建構子: 設定初始名稱
Pet::Pet(string name) {
    setName(name); // 使用 setName 避免名字過長
}

// 設定寵物姓名 (若超過 10 字元則截取前 10 個字)
void Pet::setName(string name) {
    if (name.length() > 10) {
        petName = name.substr(0, 10); // 取前 10 個字元
        cout << "名字過長，自動截取為: " << petName << endl;
    }
    else {
        petName = name;
    }
}

// 取得寵物姓名
string Pet::getName() const {
    return petName;
}

// 顯示歡迎訊息
void Pet::displayMessage() const {
    cout << "您的寵物名字是: " << getName() << "!" << endl;
}