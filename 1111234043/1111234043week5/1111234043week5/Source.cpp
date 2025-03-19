#include <iostream>
using namespace std;


class GradeBook
{
private:
    char gender = 'm';
        int age = 50;
public:
    
    void displayMessage() const
    {
        cout << "Welcome to the Grade Book!" << endl;
    } 
    int printAge() const {
        return age;
    }
}; 

int main()
{
    GradeBook myGradeBook;
    myGradeBook.displayMessage(); 	
    cout << myGradeBook.printAge() << endl;
} 