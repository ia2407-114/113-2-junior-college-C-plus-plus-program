#ifndef PET_H
#define PET_H

#include <string>
#include "Date.h"

class pet {
public:
    pet(); // 預設建構子
    pet(const std::string& t, const std::string& n, const Date& b, const Date& a);

    // 每個 setter 函式都回傳 pet&，讓你可以串接呼叫
    pet& setType(const std::string& t);
    pet& setName(const std::string& n);
    pet& setBirth(const Date& b);
    pet& setAdopt(const Date& a);

    void print() const;

private:
    std::string type;
    std::string name;
    Date birthDate;
    Date adoptDate;
};

#endif