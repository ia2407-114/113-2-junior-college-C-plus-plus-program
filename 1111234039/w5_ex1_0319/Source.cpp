#include <iostream>
using namespace std;
class GradeBook
{
private:
       int ID = 50;
public:
        void displayMessage() const
    {
        cout << "Welcome to the Grade Book!" << endl;
    } 
        int printID() 
    {
        return ID;
    }
    void changeID(int Id)
    {
        ID = Id;
    }
   }; 

int main()
{
    int ID;
    GradeBook myGradeBook; 
    myGradeBook.displayMessage(); 
    cout << myGradeBook.printID() << endl;
    cout << "½Ð¿é¤JID:" ;
    cin >> ID; 
    myGradeBook.changeID(ID);
    cout << ID;
   } 