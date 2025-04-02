#include "Pet.h"
#include <iostream>
using namespace std;

// 建構函數
Pet::Pet(string name) {
    setName(name);
}

// 設定寵物姓名
void Pet::setName(string name) {
    if (name.length() > 10) {
        this->name = name.substr(0, 10); // 取前10個字元作為姓名
    }
    else {
        this->name = name;
    }
}

// 獲取寵物姓名
string Pet::getName() const {
    return name;
}
