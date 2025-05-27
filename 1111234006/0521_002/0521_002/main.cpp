/*題目2. 分別利用"庫存類別string" 的運算子多載 & 自訂運算子多載 : ">>與<<" 兩種方式，
將輸入的"民國114年05月21號" 過濾出數字，再印出純粹的數字 "1140521"，最後再印出 格式: "114/05/21"*/
// 改為: 輸入"民國114年05月21號"
// 先印出純粹的數字 "1140521"
// 再印出 格式: "114/05/21"
#include <iostream>
#include "DateString.h"  
using namespace std;

int main()
{
    DateString date;  
    cout << "請輸入日期：民國114年05月21號" << endl;
    cin >> date;

    // 印出純數字
    cout << "純數字: " << date() << endl;

    // 印出格式化日期
    cout << "格式化輸出: " << date << endl;

    // 庫存類別 string 運算子多載
    string raw = date();         
    string y = raw.substr(0, 3); // 年：前3碼
    string m = raw.substr(3, 2); // 月：接下來2碼
    string d = raw.substr(5, 2); // 日：最後2碼

    cout << "年: " << y << endl;
    cout << "月: " << m << endl;
    cout << "日: " << d << endl;

    return 0;
}
