/*題目1. 請修改以上程式碼，建立一個私有(private)成員變數 myID，
並分別建立changeID()與printID()成員函數，利用這些成員函數，
先印出目前ID，再修改目前ID，最後在印出修改後的ID。*/



#include <iostream>
using namespace std;

class GradeBook
{
private:

    int myID = 12345;  

public:

    void displayMessage() const
    {
        cout << "Welcome to the Grade Book!" << endl;
    }


    void printID() const
    {
        cout << "目前的 ID：" << myID << endl;
    }

   
    void changeID(int newID)
    {
        myID = newID;
    }
};

int main()
{
    GradeBook myGradeBook; 

    myGradeBook.displayMessage(); 
    myGradeBook.printID();       

    myGradeBook.changeID(67890);  
    myGradeBook.printID();       
}
