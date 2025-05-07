// 圖 9.27: Employee.h
// Employee 類別定義，包含一個 static 資料成員，用來追蹤目前在記憶體中的 Employee 物件數量
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string> // 使用 string 類別

class Employee
{
public:
    // 建構子：傳入名字與姓氏
    Employee(const std::string&, const std::string&);

    // 解構子：物件被銷毀時執行
    ~Employee();

    // 回傳名字
    std::string getFirstName() const;

    // 回傳姓氏
    std::string getLastName() const;

    // 靜態成員函式：可用來查詢目前有幾個 Employee 物件
    static unsigned int getCount();

private:
    // 員工的名字與姓氏（一般的成員變數）
    std::string firstName;
    std::string lastName;

    // 靜態資料成員：所有 Employee 物件共用一份，紀錄總數
    static unsigned int count;
}; // Employee 類別定義結束

#endif // EMPLOYEE_H
