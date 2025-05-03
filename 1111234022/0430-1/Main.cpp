#include <iostream>
#include "Pet.h" // Employee class definition
using namespace std;

int main()
{
	string type;
	string name;
	int y, m, d;
	int y1, m1, d1;
	
	while (1)
	{
		try
		{
			cout << "輸入狗狗姓名: ";
			cin >> name;

			cout << "輸入狗狗品種: ";
			cin >> type;

			cout << "輸入領養日期: ";
			cin >> y1 >> m1 >> d1;

			cout << "輸入狗狗生日: ";
			cin >> y >> m >> d;

			if(y < 2005 || y >2025 )
				throw invalid_argument(" ..你的狗狗超過20歲了.. ");

			if (y1 < y || m1 < m || d1 < d)
				throw invalid_argument(" ..領養日期小於生日.. ");
			
			Date birth(m,d,y);

			Date go(m1, d1, y1);

			Pet p1(type, name, birth, go);

			cout << endl;


			
		}
		catch (invalid_argument& e)
		{
			cerr << "  \n\n" << e.what() << endl;
			return 1;
		}
		
	}
	
	

	
}