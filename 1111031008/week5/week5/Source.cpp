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
    cout << "��id " << myGradeBook.getid() << endl; 
    cout << "��Jid "; 
    cin >> A;
    myGradeBook.changeID(A); 
    cout << "�ܧ��id " << myGradeBook.getid() << endl;
}