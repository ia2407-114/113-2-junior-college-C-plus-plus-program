#include <iostream>
#include "PhoneNumber.h"
using namespace std;

int main() {
    DateNumber date;

    cout << "�п�J����]�Ҧp�G����114�~05��21���^�G" << endl;
    cin >> date;

    cout << "�¼Ʀr�榡��: " << date.getRaw() << endl;
    cout << "�榡�Ƥ����: " << date << endl;

    return 0;
}