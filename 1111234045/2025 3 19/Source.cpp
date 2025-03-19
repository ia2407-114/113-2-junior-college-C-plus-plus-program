// Fig. 3.1: fig03_01.cpp
// Define class GradeBook with a member function displayMessage;
// Create a GradeBook object and call its displayMessage function.
#include <iostream>
using namespace std;

// GradeBook class definition
class GradeBook
{
 private:

     int myID = 4;
public:
    void printID() const
    {
        cout << "ID:" << myID<<endl;
    }
    void changeID(int newID) 
    {
        myID = newID;
    }
};  
int main()
{
    GradeBook myGradeBook;
    myGradeBook.printID();
    int newID ;
    cout << "¿é¤JID"<<endl;
    cin >> newID ;
    myGradeBook.changeID(newID);
    myGradeBook.printID();  
} 