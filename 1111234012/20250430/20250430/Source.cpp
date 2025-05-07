
#include <iostream>
#include "Pet.h"
using namespace std;

bool checkDate(int year_birth, int month_birth, int day_birth, int year_adopt, int month_adopt, int day_adopt);

int main()
{
	string name, species;
	int year_birth, month_birth, day_birth;
	int year_adopt, month_adopt, day_adopt;
	bool con = true, check = false;

	while (con) {
		cout << "請輸入狗狗的名字：";
		cin >> name;
		cout << "請輸入狗狗的種類：";
		cin >> species;
		cout << "請輸入「出生日期」\n";
		cout << "西元年：";
		cin >> year_birth;
		cout << "月份：";
		cin >> month_birth;
		cout << "日期：";
		cin >> day_birth;

		cout << endl;

		cout << "請輸入「領養日期」\n";
		cout << "西元年：";
		cin >> year_adopt;
		cout << "月份：";
		cin >> month_adopt;
		cout << "日期：";
		cin >> day_adopt;

		check = checkDate(year_birth, month_birth, day_birth, year_adopt, month_adopt, day_adopt);
		if (!check) {
			continue;
		}

		cout << endl;

		try {
			Date birth(year_birth, month_birth, day_birth);
			Date adopt(year_adopt, month_adopt, day_adopt);

			Pet dog(name, species, birth, adopt);

			cout << endl;
			dog.print();
		}
		catch (exception& e) {
			cout << e.what();
		}

		cout << "\n是否繼續輸入下一筆資料(是 = 1，否 = 0)：";
		cin >> con;
	}
}

bool checkDate(int year_birth, int month_birth, int day_birth, int year_adopt, int month_adopt, int day_adopt) {
	if (year_birth <= year_adopt) {
		if (year_birth == year_adopt && month_birth > month_adopt) { //年份一樣 月份出錯
			cout << "領養月份不能小於狗狗的出生月份!\n";
			return false;
		}

		if (year_birth == year_adopt && month_birth == month_adopt && day_birth > day_adopt) { //年份一樣 月份一樣 日期出錯
			cout << "領養日不能小於狗狗的出生日!\n";
			return false;
		}
	}
	else { // 年份出錯
		cout << "領養年份不能小於狗狗的出生年份!\n";
		return false;
	}

	if (year_adopt - year_birth > 20) {
		cout << "狗狗不能超過20歲\n";
		return false;
	}

	return true;
}
