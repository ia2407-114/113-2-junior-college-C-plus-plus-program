// 圖 10.20：fig10_20.cpp
// 使用 static（靜態）資料成員來追蹤某個類別建立了多少個物件。
#include <iostream>
#include "Employee.h" // Employee 類別的定義
using namespace std;

int main()
{
    // 此時尚未建立任何物件；使用類別名稱和作用域解析運算子 (::)
    // 來存取靜態成員函式 getCount
    cout << "在建立任何物件之前的員工人數是 "
        << Employee::getCount() << endl; // 使用類別名稱呼叫靜態函式

   // 以下這個區塊中會建立與銷毀 Employee 物件
   // 這些動作會在 main 結束前完成
    {
        Employee e1("Susan", "Baker");   // 建立第一位員工
        Employee e2("Robert", "Jones");  // 建立第二位員工

        // 此時已經有兩個物件存在；再次使用類別名稱和作用域解析運算子
        // 呼叫靜態成員函式 getCount
        cout << "建立物件之後的員工人數是 "
            << Employee::getCount();

        // 顯示每一位員工的姓名
        cout << "\n\n第一位員工："
            << e1.getFirstName() << " " << e1.getLastName()
            << "\n第二位員工："
            << e2.getFirstName() << " " << e2.getLastName() << "\n\n";
    } // 離開這個區塊時，e1 和 e2 會被自動銷毀

    // 此時所有物件都已經被刪除，因此再次使用類別名稱
    // 呼叫靜態成員函式 getCount
    cout << "\n銷毀物件之後的員工人數是 "
        << Employee::getCount() << endl;
} // main 函式結束
