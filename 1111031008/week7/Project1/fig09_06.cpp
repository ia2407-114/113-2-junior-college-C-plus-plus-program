=
#include <iostream>
#include "Time.h"

int main() {
    int year, month, day;

=
    std::cout << "��J�褸�~�� (1911-2050): ";
    std::cin >> year;
    std::cout << "��J��� (1-12): ";
    std::cin >> month;
    std::cout << "��J��� (1-31): ";
    std::cin >> day;

 =
    Time time(year, month, day);
=
    time.printDate();

    return 0;
}
