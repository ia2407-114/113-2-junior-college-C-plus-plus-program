#ifndef PET_H
#define PET_H

#include <iostream>
#include <string>
using namespace std;

class Pet {
public:
    explicit Pet(string name); // 建構子
    void setName(string name); // 設定寵物姓名
    string getName() const;    // 取得寵物姓名
    void displayMessage() const; // 顯示歡迎訊息

private:
    string petName; // 私有變數: 寵物的名字
};

#endif