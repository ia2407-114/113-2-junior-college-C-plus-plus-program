=
#include <iostream>
#include "Time.h"

int main() {
    int year, month, day;

=
    std::cout << "輸入西元年分 (1911-2050): ";
    std::cin >> year;
    std::cout << "輸入月份 (1-12): ";
    std::cin >> month;
    std::cout << "輸入日期 (1-31): ";
    std::cin >> day;

 =
    Time time(year, month, day);
=
    time.printDate();

    return 0;
}
