// 圖 9.19：Pet.h
// Pet 類別的定義，展示組合（Composition）的使用方式。
// 成員函式定義於 Pet.cpp 中。

#ifndef PET_H      
#define PET_H

#include <string>  // 使用 std::string 類別
#include "Date.h"  // 引入 Date 類別的定義

// Pet 類別定義
class Pet
{
public:
    Pet(const std::string& name, const std::string& species,
        const Date& birth, const Date& adoption);

    
    void print() const;

    
    ~Pet();

private:
    std::string petName;        
    std::string petSpecies;     
    const Date birthDate;       
    const Date adoptDate;    
}; 

#endif // PET_H
