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
    cout<< "��id "<< myGradeBook.printid() << endl; 
    cout << "��Jid "; 
    cin >> a;
    myGradeBook.changeID(a);   
    cout << "�ܧ��id " << myGradeBook.printid() << endl; 
} 