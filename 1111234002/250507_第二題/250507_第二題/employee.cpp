// 圖 9.28：Employee.cpp
// Employee 類別的成員函式定義
#include <iostream>
#include "Employee.h" // 引入 Employee 類別定義
using namespace std;

// 在全域命名空間中定義並初始化靜態資料成員
unsigned int Employee::count = 0; // 注意這裡不能再加 static 關鍵字

// 定義靜態成員函式，回傳目前已建立的 Employee 物件數量
// 此函式在 Employee.h 中宣告為 static
unsigned int Employee::getCount()
{
    return count;
} // getCount 結束

// 建構子：初始化非靜態的成員變數，並將靜態變數 count 增加 1
Employee::Employee(const string& first, const string& last)
    : firstName(first), lastName(last) // 使用初始化列表
{
    ++count; // 員工總數 +1
    cout << "Employee 建構子呼叫，姓名：" << firstName
        << ' ' << lastName << endl;
}

// 解構子：在物件被銷毀時會執行
Employee::~Employee()
{
    cout << "解構子 ~Employee() 呼叫，姓名：" << firstName
        << ' ' << lastName << endl;
    --count; // 員工總數 -1
}

// 傳回員工的名字
string Employee::getFirstName() const
{
    return firstName; // 回傳名字的複本
}

// 傳回員工的姓氏
string Employee::getLastName() const
{
    return lastName; // 回傳姓氏的複本
}
