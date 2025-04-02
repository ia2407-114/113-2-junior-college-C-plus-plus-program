#pragma once
#ifndef PET_H
#define PET_H

#include <string>
using namespace std;

class Pet {
public:
    explicit Pet(string name); // 建構函數
    void setName(string name); // 設定寵物姓名
    string getName() const;    // 獲取寵物姓名
private:
    string name; // 寵物的姓名
};

#endif

