// �אּ: ��J"����114�~05��21��"
// ���L�X�º骺�Ʀr "1140521"
// �A�L�X �榡: "114/05/21"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	// �w�s���O
	string year_include, y, m, d;
	cout << "�п�J�u����XXX�~XX��XX���v" << endl;
	cin >> year_include;
	y = year_include.substr(4, 3);
	m = year_include.substr(9, 2);
	d = year_include.substr(13, 2);

	cout << "�~����:\n";
	cout << y << m << d << endl;
	cout << y << "/" << m << "/" << d << endl << endl;

}