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
    cout <<"�ڪ��~�֬O:"<< myGradeBook.changeID() << endl;
    cin >> ID;
    cout<< "�ڪ����T�~�֬O:" << myGradeBook.printID(ID)<<endl;
}