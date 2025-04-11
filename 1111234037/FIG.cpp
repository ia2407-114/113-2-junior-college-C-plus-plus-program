#include <iostream>
#include "Time.cpp"
using namespace std;

int main() {
    int year, month, day;

    try {
        cout << "請輸入西元年: ";
        cin >> year;
        cout << "請輸入月份: ";
        cin >> month;
        cout << "請輸入日期: ";
        cin >> day;

        ConcreteTime time(year, month, day);

        time.printGregorian();  
        time.printRepublican();  
    }
    catch (const invalid_argument& e) {
        cerr << "錯誤: " << e.what() << endl;
    }

    return 0;
}
