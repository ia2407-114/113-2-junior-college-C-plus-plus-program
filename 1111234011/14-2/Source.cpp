#include <iostream>
#include "PhoneNumber.h"
using namespace std;

int main()
{
	PhoneNumber phone;

	string s1;
	cout << "��J����X�~�X��X�� (ex.����114�~05��21��):\n";
	cin >> s1;
	cout << s1.substr(4, 3) << "/" << s1.substr(9, 2) << "/" << s1.substr(13, 2) << "\n";

	cout << "��J����X�~�X��X�� (ex.����114�~05��21��):" << endl;
	cin >> phone;
	cout << phone << endl;
}