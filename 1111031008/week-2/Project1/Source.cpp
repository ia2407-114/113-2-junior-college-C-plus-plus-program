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
			cout << "���~";

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
			cout << "���~";

	}
};
int nain()
{
	int a = 0;
	char in_b;
	GradeBook myGradeBook;
	cout << "��age:" << myGradeBook.printid() << endl;
	cout << "��Jage(0-99):";
	cin >> a;
	myGradeBook.changeID(a);
	cout << "���ܫ�:" << myGradeBook.printid() << endl;

	cout << "��ʧO:" << myGradeBook.printgender() << endl;
	cout << "��J�ʧO(M�BF)";
	cin >> in_b;
	myGradeBook.changeID(in_b);
	cout << "���ܫ�:" << myGradeBook.printgender() << endl;
}