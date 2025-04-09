/*肈ヘ1. 叫э祘Α絏ミ╬Τ(private)Θ跑计 myID
だミchangeID()籔printID()Θㄧ计ノ硂ㄇΘㄧ计
ヘ玡IDэヘ玡ID程эID*/



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
        cout << "ヘ玡 ID" << myID << endl;
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
