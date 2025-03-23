#include <iostream>
using namespace std;

class GradeBook
{
private:
	int age = 0 ;
	char b = 'A';
  
public:
	int printid() const
	{
		return age;
	}
	void changeID(int a)
	{
		if (a > 0 && a < 99)
			age = a;
		else
			cout << "錯誤";

	}
	char printgender()
	{
		return b;
	}
	void changeID(char in_b)
	{
		if (isupper(in_b) != 0)
		{
			if (in_b == 'M' || in_b == 'F')
				b = in_b;
		}
		else
			cout << "錯誤";

	}
};
int nain()
{
	int a = 0;
	char in_b;
	GradeBook myGradeBook;
	cout << "原age:" << myGradeBook.printid() << endl;
	cout << "輸入age(0-99):";
	cin >> a;
	myGradeBook.changeID(a);
	cout << "更變後:" << myGradeBook.printid() << endl;

	cout << "原性別:" << myGradeBook.printgender() << endl;
	cout << "輸入性別(M、F)";
	cin >> in_b;
	myGradeBook.changeID(in_b);
	cout << "更變後:" << myGradeBook.printgender() << endl;
}