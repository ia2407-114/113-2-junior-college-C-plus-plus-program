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
			cout << "��J�����m�W: ";
			cin >> name;

			cout << "��J�����~��: ";
			cin >> type;

			cout << "��J��i���: ";
			cin >> y1 >> m1 >> d1;

			cout << "��J�����ͤ�: ";
			cin >> y >> m >> d;

			if(y < 2005 || y >2025 )
				throw invalid_argument(" ..�A�������W�L20���F.. ");

			if (y1 < y || m1 < m || d1 < d)
				throw invalid_argument(" ..��i����p��ͤ�.. ");
			
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