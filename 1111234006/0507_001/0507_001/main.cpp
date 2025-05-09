/*0507-題目1. 建立一個可以讓使用者透過鍵盤輸入名字、生日及領養日的程式。
程式碼需要使用『this指標』，利用『瀑布式』的函數呼叫方式將員工(寵物)姓、名與資料列出。*/
#include <iostream>     
#include <vector>       
#include "pet.h"      
#include "Date.h" 
using namespace std;

int main() {

    vector<pet> pets;  // vector 容器可存多隻寵物

    while (true) {
        string type, name;
        int bMonth, bDay, bYear;
        int aMonth, aDay, aYear;

        cout << "\n請輸入寵物種類（輸入 0 結束）：";
        cin >> type;
        if (type == "0") break;

        cout << "請輸入寵物名字：";
        cin >> name;

        Date birthDate;
        cout << "請輸入生日（格式：月 日 年）：";
        cin >> bMonth >> bDay >> bYear;
        birthDate.setMonth(bMonth).setDay(bDay).setYear(bYear);

        Date adoptDate;
        cout << "請輸入領養日（格式：月 日 年）：";
        cin >> aMonth >> aDay >> aYear;
        adoptDate.setMonth(aMonth).setDay(aDay).setYear(aYear);

        if (!birthDate.isEarlierThanOrEqual(adoptDate)) {
            cout << "錯誤：生日不能晚於領養日，請重新輸入。\n";
            continue;
        }

        int age = adoptDate.getYear() - birthDate.getYear();
        if (type == "dog" && (age < 0 || age > 20)) {
            cout << "錯誤：狗狗年齡必須介於 0 到 20 歲之間！\n";
            continue;
        }

        //  使用『瀑布式』呼叫方式 + this 指標
        pet p;
           p.setType(type)
            .setName(name)
            .setBirth(birthDate)
            .setAdopt(adoptDate);

        pets.push_back(p);
    }

    cout << "\n所有寵物資訊如下：\n";
    for (const auto& p : pets) {
        p.print();
    }

    return 0;
}
