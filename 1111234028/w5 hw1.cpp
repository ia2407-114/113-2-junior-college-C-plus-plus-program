#include <iostream>
using namespace std;

class GradeBook
{
private:
	int myID = 114514;

public:

	void displayMessage() const
	{
		cout << "�A�n <3\n" << endl;
	}
	int changeID()
	{
		int myID;
		cout << "��J�z�Q�ק諸ID:\n";
		cin >> myID;
		return myID;
	}
	void printID()
	{
		cout << "�z��ID��:" << myID << "\n";
	}


};

int main()
{
	GradeBook myGradeBook;
	myGradeBook.displayMessage();
	myGradeBook.printID();
	myGradeBook.changeID();
	myGradeBook.printID();

}