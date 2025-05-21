#include <iostream>
#include "PhoneNumber.h"
using namespace std;

int main()
{
	PhoneNumber phone;

	string s1;
	cout << "輸入民國幾年幾月幾號 (ex.民國114年05月21號):\n";
	cin >> s1;
	cout << s1.substr(4, 3) << "/" << s1.substr(9, 2) << "/" << s1.substr(13, 2) << "\n";

	cout << "輸入民國幾年幾月幾號 (ex.民國114年05月21號):" << endl;
	cin >> phone;
	cout << phone << endl;
}