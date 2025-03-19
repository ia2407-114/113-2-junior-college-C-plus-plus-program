//肈ヘ1. 叫э祘Α絏ミ╬Τ(private)Θ跑计 myIDだミchangeID()籔printID()Θㄧ计ノ硂ㄇΘㄧ计ヘ玡IDэヘ玡ID程эID
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
         cout << "块myID:";
         cin >> myID ;
         cout << "myID:" << myID << endl;
         return myID;
     }

     void changeID(int ID)
     {
      cout << "块changeID:";
      cin >> ID ;       
      myID = ID;
      cout << "changeID:" << myID;
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