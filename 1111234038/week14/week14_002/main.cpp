// 改為: 輸入"民國114年05月21號"
// 先印出純粹的數字 "1140521"
// 再印出 格式: "114/05/21"
#include <iostream>
#include "PhoneNumber.h"
#include <string>
using namespace std;

int main()
{
	// 使用者自訂
    Year year_string;

	cout << "請輸入「民國XXX年XX月XX號」" << endl;
	cin >> year_string;

	cout << "年份為:\n";
	cout << year_string << endl;
}