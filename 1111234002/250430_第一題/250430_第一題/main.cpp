/*題目1. 修改上面的五個程式碼，修改為pet類別，建立一個可以讓使用者透過鍵盤輸入多隻寵物的種類、名字、¬生日及領養日的程式。建立Pet類別與Date類別，並使用date類別，程式碼內需達成以下條件:

1.要有建構子、解構子、日期檢查的方法(函數)
2.用解構子印出寵物所有資料，
3.日期檢查函數需判斷寵物的年齡是否合理，以及生日不大於領養日。(狗的年齡介於0~20歲，條件寫法不限制)
4.Pet類別內必須使用date類別作為其資料成員(使用composition class)。*/

#include <iostream>
#include "Pet.h"
#include "Date.h"

using namespace std;
int birthMonth, birthDay, birthYear;
int adoptMonth, adoptDay, adoptYear;
int main() {
    string kind, name;
    int n;
    cout << "請問要輸入幾隻寵物：";
    cin >> n;
    for (int i = 0; i < n ; i++) {
        

        cout << "請輸入寵物種類：";
        cin >> kind;

        cout << "請輸入寵物名字：";
        cin >> name;

        cout << "請輸入生日（月 日 年）：";
        cin >> birthMonth >> birthDay >> birthYear;

        cout << "請輸入領養日（月 日 年）：";
        cin >> adoptMonth >> adoptDay >> adoptYear;
    }
    

    try {
        Date birthday(birthMonth, birthDay, birthYear);
        Date adoption(adoptMonth, adoptDay, adoptYear);

        Pet pet(kind, name, birthday, adoption);

        if (pet.isValid()) {
            cout << "建立成功！程式結束時將自動印出寵物資料。" << endl;
        }
        else {
            cout << "錯誤：生日晚於領養日！" << endl;
        }

    }
    catch (const invalid_argument& e) {
        cout << "錯誤：" << e.what() << endl;
    }

    return 0; // 程式結束，會觸發 Pet 解構子，自動印出寵物資料
}
