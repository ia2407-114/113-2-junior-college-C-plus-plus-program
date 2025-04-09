#include <iostream>
using namespace std;

class GradeBook
{
private:
    int age=10;
public:

    void displayMessage() const
    {
        cout << "Welcome to the Grade Book!" << endl;
    }
    int changeID()
    {
        return age;
    }
    int printID(int Age)
    {
        age = Age;
        return age;
    }
};  

int main()
{
    int ID;
    GradeBook myGradeBook; 
    myGradeBook.displayMessage(); 
    cout <<"我的年齡是:"<< myGradeBook.changeID() << endl;
    cin >> ID;
    cout<< "我的正確年齡是:" << myGradeBook.printID(ID)<<endl;
}