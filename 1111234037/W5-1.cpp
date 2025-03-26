#include <iostream>
using namespace std;

class GradeBook
{
private:
	int myID;

public:
	GradeBook();                
	void displayMessage() const; 
	void printID() const;        
	void changeID(int newID);   
}; 
GradeBook::GradeBook() : myID(321) {}


void GradeBook::displayMessage() const
{
	cout << "Welcome to the Grade Book!" << endl;
}


void GradeBook::printID() const
{
	cout << "Current ID: " << myID << endl;
}


void GradeBook::changeID(int newID)
{
	myID = newID;
	cout << "ID changed to: " << myID << endl;
}


int main()
{
	GradeBook myGradeBook;

	
	myGradeBook.displayMessage();

	
	myGradeBook.printID();

	
	myGradeBook.changeID(123);

	
	myGradeBook.printID();

	return 0;
} 
