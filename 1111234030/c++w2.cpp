#include <iostream>
using namespace std;

class GradeBook
{
private:
    int myID = 69;
public:


    void printID() 
    {
        cout << "\n�ثe��ID:" << myID << "\n";
    }
    int changeID(int newID) 
    {
        cout << "��J�sID:";
        cin >> newID;
        myID = newID;
        return myID;
    }
};

int main()
{   
    int newID = 0;
    GradeBook myGradeBook; 
    myGradeBook.printID();
    myGradeBook.changeID(newID);
    myGradeBook.printID();
} 