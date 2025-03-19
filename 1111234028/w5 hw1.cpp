#include <iostream>
using namespace std;

class GradeBook
{
private:
	int myID = 114514;

public:

	void displayMessage() const
	{
		cout << "你好 <3\n" << endl;
	}
	int changeID()
	{
		int myID;
		cout << "輸入您想修改的ID:\n";
		cin >> myID;
		return myID;
	}
	void printID()
	{
		cout << "您的ID為:" << myID << "\n";
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