#include <iostream>
#include "PhoneNumber.h"
using namespace std;

int main()
{
    PhoneNumber phone;
    cout << "��J��� (�p: ����114�~05��21��): ";
    cin >> phone;
    cout << "�¼Ʀr: " << phone.getRawNumber() << endl;
    cout << "�榡�Ƥ��: " << phone << endl;
    return 0;
}
