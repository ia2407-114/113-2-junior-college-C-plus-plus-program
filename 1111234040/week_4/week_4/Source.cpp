#include <iostream>
using namespace std;

class GradeBook
{
private:
    int myID; 

public:
    
    GradeBook() : myID(0) {} 

    void displayMessage() const
    {
        cout << "�w��ϥΦ��Zï�I" << endl;
    }

    
    void changeID(int newID)
    {
        myID = newID; 
    }

   
    void printID() const
    {
        cout << "�ثe�� ID: " << myID << endl;
    }
};  

int main()
{
    GradeBook myGradeBook; 
    myGradeBook.displayMessage(); 

    
    myGradeBook.printID();

    
    int newID;
    cout << "�п�J�s�� ID: ";
    cin >> newID;

   
    myGradeBook.changeID(newID);

    
    myGradeBook.printID();

    return 0;
}