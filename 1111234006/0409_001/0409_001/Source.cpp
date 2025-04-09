/*source.cpp 0409題目1.*/
/*題目1.建立一個可以讓使用者透過鍵盤輸入西年、月、日，分別印出西元與民國日期，
但程式碼需達成以下條件:
1. 請使用類別定義，定義部分請用"抽象方法”(介面與實作分離)
2. 日期部分請透過建構子設定與設定預設值 (預設值為1990年1月1號) (西元年的範圍介於1911-2050)
3. 必須判斷內容是否正確，例如2017/03/32為錯誤的日期 */
#include <iostream>
#include <stdexcept> //引入標準例外處理函式庫，用於錯誤處理
#include "Date.h" 
using namespace std;

int main() {
    int y, m, d;

    cout << "請輸入西元年：";
    cin >> y;
    cout << "請輸入月份：";
    cin >> m;
    cout << "請輸入日期：";
    cin >> d;

    try { 
        Date date(y, m, d); 
        date.printGregorian(); // 顯示西元日期（Gregorian 日期）
        date.printROC(); // 顯示民國日期（ROC 日期）
    }
    /*這是例外處理的開始區塊，表示這裡的程式碼可能會發生錯誤
  （例如使用者輸入非法的日期），如果出錯會跳到 `catch` 去處理。*/

    catch (invalid_argument& e) {
        cerr << "錯誤： " << e.what() << endl;
    }
    /*當使用者輸入的日期不合理時，程式不會直接當掉，
    而是會跳出錯誤訊息給使用者看。*/

    return 0;
}
