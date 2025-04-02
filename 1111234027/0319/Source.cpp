#include <iostream>
using namespace std;

class GradeBook
{
private:
    int myID = 50;
public:
    void changeID(int ID)
    {
        myID = ID;
    }

    int getID() const
    {
        return myID;
    }

    void displayMessage() const
    {
        cout << "Welcome to the Grade Book!" << endl;
    }
};

int main()
{
    GradeBook myGradeBook;
    int id;

    cout << "ID¬°:" << myGradeBook.getID() << endl;

    cout << "½Ð¿é¤JID:";
    cin >> id;

    myGradeBook.changeID(id);
    cout << "ID¬°:" << myGradeBook.getID() << endl;
}