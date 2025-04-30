#ifndef PET_H
#define PET_H

#include <string>       
#include "Date.h"       

class pet
{
public:
    // 建構子，接受寵物種類、名字、生日、領養日四個參數
    pet(const std::string&, const std::string&, const Date&, const Date&);

    // 印出寵物資訊，包括:名字、種類、生日、領養日
    void print() const;

    // 解構子
    ~pet();

private:
    std::string type;     // 種類
    std::string name;     // 名字
    const Date birthDate; // 出生日期
    const Date adoptDate; // 領養日期
};
#endif


