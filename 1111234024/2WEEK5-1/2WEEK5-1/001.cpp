//題目1. 請修改以上程式碼，建立一個私有(private)成員變數 myID，並分別建立changeID()與printID()成員函數，利用這些成員函數，先印出目前ID，再修改目前ID，最後在印出修改後的ID。
// Fig. 3.1: fig03_01.cpp
// Define class GradeBook with a member function displayMessage;
// Create a GradeBook object and call its displayMessage function.
#include <iostream>
using namespace std;

class GradeBook
{
private:
    int myID ;    

public:

     int printID(int myID) const
     {
         cout << "輸入myID:";
         cin >> myID ;
         cout << "myID為:" << myID << endl;
         return myID;
     }

     void changeID(int ID)
     {
      cout << "輸入changeID:";
      cin >> ID ;       
      myID = ID;
      cout << "changeID為:" << myID;
     }

    void displayMessage() const
    {
        cout << "Welcome to the Grade Book!" << endl;
    } 
};   


int main()
{
    GradeBook myGradeBook{}; 
    myGradeBook.printID(0);
    myGradeBook.changeID(0);

    return 0 ;
}                                                                                                                                                                                                                                                                                                                                                                                      