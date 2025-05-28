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
}