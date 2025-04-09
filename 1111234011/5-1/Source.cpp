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
    void changeID(int a) 
    {
        myid = a;
    }
};

int main()
{
    int a = 0;
    GradeBook myGradeBook;
    cout << "目前學號為:" << myGradeBook.getid() << endl;
    cout << "輸入新學號:";
    cin >> a;
    myGradeBook.changeID(a);
    cout << "新學號為:" << myGradeBook.getid() << endl;
}