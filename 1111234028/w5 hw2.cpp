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
		cout << "�A�n <3\n" << endl;
	}
	int changeID()
	{
		cout << "��J�z�Q�ק諸ID:\n";
		cin >> myID;
		return myID;
	}
	void printAll()
	{
		cout << "�z��ID��:" << myID << "\n";
		cout << "�z���ʧO��:" << sexy << "\n";
		cout << "�z���~�֬�:" << age << "\n";
	}
	int changeAge()
	{
		int ok = 1;
		while (ok == 1)
		{
			cout << "��J�z���~��:\n";
			cin >> age;
			if (age <= 0 or age >= 100)
			{
				printf("�п�J0~99���~��\n...\n");
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
		cout << "��J�r��:(M���k��,F���k��)\n";
		cin >> sexy;
		if (isupper(sexy) != 0)
			cout << sexy << "�O�j�g�^��r��\n";
		else
			cout << sexy << "���O�j�g�^��r��\n";

		if (sexy == 'M')
			cout <<":"<< sexy << "�A�O�k��\n";
		else if(sexy == 'F')
			cout << ":" << sexy << "�A�O�k��\n";
		else
			cout << ":" << sexy << "�A�ʧO����L\n";

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