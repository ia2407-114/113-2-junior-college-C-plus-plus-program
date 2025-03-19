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
    cout << "原本的id:" << myGradeBook.printID()<< endl;
    cout << "請輸入新id:" << endl;
    cin >> id;
    myGradeBook.changeID(id);
    cout << "現在的id:" << myGradeBook.printID() << endl;
} // end main