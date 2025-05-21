#include<iostream>
#include"Date.h"
#include"Pet.h"
#include<stdexcept>
#include<sstream>
using namespace std;

int main()
{
	int yb, mb, db;
	int yg, mg, dg;
	string name, type;

	try
	{
		cout << "輸入寵物名字: ";
		getline(cin, name);

		cout << "輸入寵物種類: ";
		getline(cin, type);

		cout << "輸入寵物生日: ";
		cin >> yb >> mb >> db;

		cout << "輸入寵物領養日: ";
		cin >> yg >> mg >> dg;

		if ((yb > 2025 || yb < 2005) || (yg > 2025 || yg < 2005))
			throw  invalid_argument("錯誤! 狗狗年齡須介於0-20歲");

		if (yb > yg)
			throw  invalid_argument("錯誤! 狗狗領養年份大於出生年份");
		if (yb == yg)
		{
			if (mb > mg)
				throw  invalid_argument("錯誤! 狗狗領養月份大於出生月份");
			if (mb == mg)
			{
				if (db > dg)
					throw  invalid_argument("錯誤! 狗狗領養日大於出生日");
			}
		}
		Date bir(yb, mb, db);
		Date go(yg, mg, dg);
		Pet pp;

		pp.setdata(name, type, bir, go).print().bye(); //瀑布
	}
	catch (const invalid_argument& e)
	{
		cerr << e.what() << endl;
		return 1;
	}
}