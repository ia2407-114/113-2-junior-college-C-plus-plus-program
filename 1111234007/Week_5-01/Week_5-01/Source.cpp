//肈ヘ1. 叫э祘Α絏ミ╬Τ(private)Θ跑计 myID
//だミchangeID()籔printID()Θㄧ计ノ硂ㄇΘㄧ计ヘ玡IDэヘ玡ID程эID
#include <iostream>
using namespace std;

class GradeBook
{
private:
    int myID;
public:
    
    GradeBook(int id) : myID(id) {}

   void displayMessage() const
    {
        cout << "Welcome to the Grade Book!" << endl;
    }
    void printID() const
    {
        cout << "MYID : " << myID << endl;
    }
    void changeID(int newID)
    {
        myID = newID;
    }
}; 

int main()
{
    int MYID, newID;

    cout << "块MY ID: ";
    cin >> MYID;

    GradeBook myGradeBook(MYID);
    myGradeBook.printID();

    cout << "块changeID: ";
    cin >> newID;

    myGradeBook.changeID(newID);
    myGradeBook.printID();
       
    return 0; 
} 
