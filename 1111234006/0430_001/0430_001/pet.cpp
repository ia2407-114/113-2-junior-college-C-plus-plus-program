#include <iostream>
#include "pet.h"   
#include "Date.h"   
using namespace std;

// 建構子：初始化寵物的種類、名字、出生日期和領養日期
pet::pet(const string& t, const string& n, const Date& bDate, const Date& aDate)
    : type(t), name(n), birthDate(bDate), adoptDate(aDate)
{
    // 顯示當寵物物件被建立時的訊息
    cout << "Pet object constructor: " << type << " named " << name << endl;
}

// 印出寵物的資訊：包括種類、名字、領養日和出生日
void pet::print() const
{
    // 顯示寵物的種類和名字
    cout << "寵物種類: " << type << ", 名字: " << name << "\n";

    // 顯示寵物的領養日期
    cout << "  領養日: ";
    adoptDate.print(); // 呼叫 Date 類別的 print 函數來印出領養日期
    cout << "  出生日: ";
    birthDate.print(); // 呼叫 Date 類別的 print 函數來印出出生日期
    cout << endl; 
}

// 解構子：當寵物物件被銷毀時，顯示銷毀訊息
pet::~pet()
{
    cout << "Pet object destructor: " << type << " named " << name << endl;
}
