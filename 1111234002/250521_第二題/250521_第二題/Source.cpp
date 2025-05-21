#include <iostream>
#include "DateString.h"
using namespace std;

int main()
{
    DateString date;

    cout << "請輸入日期：民國114年05月21號";
    cin >> date;


    // 印出純數字
    cout << "純數字: " << date() << endl;

    // 印出格式化日期
    cout << "格式化輸出: " << date << endl;

    return 0;
}/*題目2. 分別利用"庫存類別" string的運算子多載，以及 "自訂運算子多載 :>>與<<" 兩種方式，
 將 輸入的"民國114年05月21號" 過濾出數字，再印出純粹的數字 "1140521"，最後再印出 格式: "114/05/21"*/