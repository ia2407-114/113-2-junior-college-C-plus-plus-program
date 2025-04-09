#include <iostream>
#include "Time.cpp"
using namespace std;

int main() {
    int year, month, day;

    try {
        cout << "�п�J�褸�~: ";
        cin >> year;
        cout << "�п�J���: ";
        cin >> month;
        cout << "�п�J���: ";
        cin >> day;

        ConcreteTime time(year, month, day);

        time.printGregorian();  
        time.printRepublican();  
    }
    catch (const invalid_argument& e) {
        cerr << "���~: " << e.what() << endl;
    }

    return 0;
}
