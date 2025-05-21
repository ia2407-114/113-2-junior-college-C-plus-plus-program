#include <iostream>
#include "PhoneNumber.h"
using namespace std;

int main() {
    DateNumber date;

    cout << "請輸入日期（例如：民國114年05月21號）：" << endl;
    cin >> date;

    cout << "純數字格式為: " << date.getRaw() << endl;
    cout << "格式化日期為: " << date << endl;

    return 0;
}