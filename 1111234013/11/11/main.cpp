#include<iostream>
#include"Date.h"
#include"Pet.h"
#include<stdexcept>
#include<sstream>
using namespace std;

int main()
{
	int yb, mb, db;
	int yh, mh, dh;
	string name, type;

	try
	{
		cout << "input dog's name: ";
		getline(cin, name);

		cout << "input dog's type: ";
		getline(cin, type);

		cout << "input dog's birth: ";
		cin >> yb >> mb >> db;


		cout << "input dog's go home: ";
		cin >> yh >> mh >> dh;

		if ((yb > 2025 || yb < 2005) || (yh > 2025 || yh < 2005))     //scan the age is correct or not
			throw  invalid_argument("...dog's age out of range (< 20)...");


		if (yb > yh)                       //scan the date of birth and the date of go is correct or not
			throw  invalid_argument("...wrong ,the date of birth can't be bigger than date of go ...1");

		if (yb == yh)
		{
			if (mb > mh)
				throw  invalid_argument("...wrong ,the date of birth can't be bigger than date of go ...2");

			if (db > dh)
				throw  invalid_argument("...wrong ,the date of birth can't be bigger than date of go ...3");
		}

		Date bir(yb, mb, db);
		Date go(yh, mh, dh);
		Pet pp(name, type, bir, go);

	}
	catch (const invalid_argument& e)
	{
		cerr << e.what() << endl;
		return 1;
	}


}