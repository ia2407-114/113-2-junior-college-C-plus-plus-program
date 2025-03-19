#include <iostream>

using namespace std;

class GradeBook
{
private:
    int myid = 0; 

public:
    int printid() const   
    {
        return myid;    
    }
    void changeID(int a)  
    {
        myid = a;    
    }
}; 

int main()
{
    int a = 0;
    GradeBook myGradeBook; 
    cout<< "原id "<< myGradeBook.printid() << endl; 
    cout << "輸入id "; 
    cin >> a;
    myGradeBook.changeID(a);   
    cout << "變更後id " << myGradeBook.printid() << endl; 
} 