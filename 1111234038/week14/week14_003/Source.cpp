// 改為: 輸入"民國114年05月21號"
// 先印出純粹的數字 "1140521"
// 再印出 格式: "114/05/21"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	// 庫存類別
	string year_include, y, m, d;
	cout << "請輸入「民國XXX年XX月XX號」" << endl;
	cin >> year_include;
	y = year_include.substr(4, 3);
	m = year_include.substr(9, 2);
	d = year_include.substr(13, 2);

	cout << "年份為:\n";
	cout << y << m << d << endl;
	cout << y << "/" << m << "/" << d << endl << endl;

}