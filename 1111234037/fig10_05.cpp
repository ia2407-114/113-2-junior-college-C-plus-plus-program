#include <iostream>
#include "PhoneNumber.h"
using namespace std;

int main()
{
    PhoneNumber phone;
    cout << "輸入日期 (如: 民國114年05月21號): ";
    cin >> phone;
    cout << "純數字: " << phone.getRawNumber() << endl;
    cout << "格式化日期: " << phone << endl;
    return 0;
}
