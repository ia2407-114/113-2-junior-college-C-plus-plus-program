#include <iostream>
using namespace std;

class GradeBook
{
private:
    int myID = 5;

public:
    int printID() const
    {
        return myID;
    }
    void changeID(int ID)
    {
        myID = ID;
    }
};


int main()
{
    int ID;
    GradeBook myGradeBook;
    cout << "ID為:" << myGradeBook.printID() << endl;
    cout << "輸入修改ID:";
    cin >> ID;
    myGradeBook.changeID(ID);

    cout << "ID為:" << myGradeBook.printID() << endl;

    return 0;
}