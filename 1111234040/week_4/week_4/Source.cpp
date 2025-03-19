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
        cout << "歡迎使用成績簿！" << endl;
    }

    
    void changeID(int newID)
    {
        myID = newID; 
    }

   
    void printID() const
    {
        cout << "目前的 ID: " << myID << endl;
    }
};  

int main()
{
    GradeBook myGradeBook; 
    myGradeBook.displayMessage(); 

    
    myGradeBook.printID();

    
    int newID;
    cout << "請輸入新的 ID: ";
    cin >> newID;

   
    myGradeBook.changeID(newID);

    
    myGradeBook.printID();

    return 0;
}