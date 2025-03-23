#include <iostream>

using namespace std;

class GradeBook
{
private:
    int myid = 0; 

public:
    int getid() const 
    {
        return myid;
    }
    void changeID(int A) 
    {
        myid = A;
    }
};

int main()
{
    int A = 0;
    GradeBook myGradeBook;
    cout << "原id " << myGradeBook.getid() << endl; 
    cout << "輸入id "; 
    cin >> A;
    myGradeBook.changeID(A); 
    cout << "變更後id " << myGradeBook.getid() << endl;
}