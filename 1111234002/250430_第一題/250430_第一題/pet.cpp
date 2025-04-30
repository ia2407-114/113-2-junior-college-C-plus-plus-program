/*題目1. 修改上面的五個程式碼，修改為pet類別，建立一個可以讓使用者透過鍵盤輸入多隻寵物的種類、名字、¬生日及領養日的程式。建立Pet類別與Date類別，並使用date類別，程式碼內需達成以下條件:

1.要有建構子、解構子、日期檢查的方法(函數)
2.用解構子印出寵物所有資料，
3.日期檢查函數需判斷寵物的年齡是否合理，以及生日不大於領養日。(狗的年齡介於0~20歲，條件寫法不限制)
4.Pet類別內必須使用date類別作為其資料成員(使用composition class)。*/
// 印出 Employee 物件的資訊

#include "Pet.h"
#include <iostream>
using namespace std;

// 建構子
Pet::Pet(string k, string n, Date b, Date a)
    : kind(k), name(n), birthday(b), adoption(a) {}

// 解構子：在物件銷毀時自動印出資訊
Pet::~Pet() {
    cout << "------寵物資料輸出------" << endl;
    print();  // 呼叫原本的 print 函式
    cout << "----------------------------------" << endl;
}

// 檢查生日是否早於領養日
bool Pet::isValid() {
    return birthday.isBefore(adoption);
}

// 輸出寵物資訊
void Pet::print() {
    cout << "種類：" << kind << endl;
    cout << "名字：" << name << endl;
    cout << "生日：";
    birthday.print();
    cout << "領養日：";
    adoption.print();
}

