#include <iostream>
using namespace std;

class GradeBook
{
private:
	int myID = 114514;
	char sexy= 'F';
	int age = 17;

public:

	void displayMessage() const
	{
		cout << "你好 <3\n" << endl;
	}
	int changeID()
	{
		cout << "輸入您想修改的ID:\n";
		cin >> myID;
		return myID;
	}
	void printAll()
	{
		cout << "您的ID為:" << myID << "\n";
		cout << "您的性別為:" << sexy << "\n";
		cout << "您的年齡為:" << age << "\n";
	}
	int changeAge()
	{
		int ok = 1;
		while (ok == 1)
		{
			cout << "輸入您的年齡:\n";
			cin >> age;
			if (age <= 0 or age >= 100)
			{
				printf("請輸入0~99的年齡\n...\n");
					ok = 1;
			}
			else
			{
				ok = 0;
				break;
				return age;
			}
		}

	}
	char changeSexy()
	{
		cout << "輸入字元:(M為男性,F為女性)\n";
		cin >> sexy;
		if (isupper(sexy) != 0)
			cout << sexy << "是大寫英文字母\n";
		else
			cout << sexy << "不是大寫英文字母\n";

		if (sexy == 'M')
			cout <<":"<< sexy << "你是男生\n";
		else if(sexy == 'F')
			cout << ":" << sexy << "你是女生\n";
		else
			cout << ":" << sexy << "你性別為其他\n";

		return sexy;
	}

};

int main()
{
	GradeBook myGradeBook;
	myGradeBook.displayMessage();

	myGradeBook.changeID();
	myGradeBook.changeAge();
	myGradeBook.changeSexy();
	printf("\n");
	myGradeBook.printAll();

}