#include <iostream>
using namespace std;
class GradeBook
{
private:
     char gender ='m';
    int id = 50;

public:  
    void displayMessage() const
    {
        cout << "Welcome to the Grade Book!" << endl;
    } 
    int printID()const
    {
        return id;
    }void changeID(int Age)
    {
        id = Age;
    }
}; 
int main()
{
    int id;
    GradeBook myGradeBook; 
    myGradeBook.displayMessage(); 
    cout << "�쥻��id:" << myGradeBook.printID()<< endl;
    cout << "�п�J�sid:" << endl;
    cin >> id;
    myGradeBook.changeID(id);
    cout << "�{�b��id:" << myGradeBook.printID() << endl;
} // end main