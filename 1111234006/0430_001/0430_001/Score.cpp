/*必考0430-題目1. 修改上面的五個程式碼，修改為pet類別，建立一個可以讓使用者透過鍵盤輸入:
多隻寵物的種類、名字、生日及領養日的程式。
建立Pet類別與Date類別，並使用date類別，程式碼內需達成以下條件:

1.要有建構子、解構子、日期檢查的方法(函數)
2.用解構子印出寵物所有資料，
3.日期檢查函數需判斷寵物的年齡是否合理，以及生日不大於領養日。(狗的年齡介於0~20歲，條件寫法不限制)
4.Pet類別內必須使用date類別作為其資料成員(使用composition class)。*/

#include <iostream>     
#include <vector>       
#include "pet.h"      
#include "Date.h" 
using namespace std;

int main() {
    vector<pet> pets;  // vector 容器可存多隻寵物

    while (true) {
        string type, name;
        int bMonth, bDay, bYear; //定義三個 int 型別的變數，存取『生日B』（Birth date）
        int aMonth, aDay, aYear; //定義三個 int 型別的變數，存取『領養日A』（Adopt date）

        cout << "\n請輸入寵物種類（輸入 0 結束）：";
        cin >> type;
        if (type == "0") break;  // 若輸入 "0"，跳出循環，結束程式

        cout << "請輸入寵物名字：";
        cin >> name;

        cout << "請輸入生日（格式：月 日 年）：";
        cin >> bMonth >> bDay >> bYear;
        Date birthDate(bMonth, bDay, bYear);

        cout << "請輸入領養日（格式：月 日 年）：";
        cin >> aMonth >> aDay >> aYear;
        Date adoptDate(aMonth, aDay, aYear);  // 使用輸入的領養日資訊建立 Date 物件

        // 檢查生日，是否晚於領養日，如果是，顯示錯誤訊息並要求重新輸入
        if (!birthDate.isEarlierThanOrEqual(adoptDate)) {
            cout << "錯誤：生日不能晚於領養日，請重新輸入。\n";
            continue;  // 若條件不符合，繼續執行下一輪輸入
        }

        // 計算寵物的年齡，(領養日的年份)減(去出生年份)
        int age = adoptDate.getYear() - birthDate.getYear();

        // 檢查年齡是否在（0 到 20 歲）範圍內
        if (type == "dog" && (age < 0 || age > 20)) {
            cout << "錯誤：狗狗年齡必須介於 0 到 20 歲之間！\n";
            continue;
        }

        // 如果一切合法，將該隻寵物加入到 pets 向量中
        pets.emplace_back(type, name, birthDate, adoptDate);
    }

    cout << "\n所有寵物資訊如下：\n";
    for (const auto& p : pets) {
        p.print(); 
    }

    return 0; 
}
