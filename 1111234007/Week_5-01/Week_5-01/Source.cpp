//�D��1. �Эק�H�W�{���X�A�إߤ@�Өp��(private)�����ܼ� myID�A
//�ä��O�إ�changeID()�PprintID()������ơA�Q�γo�Ǧ�����ơA���L�X�ثeID�A�A�ק�ثeID�A�̫�b�L�X�ק�᪺ID�C
#include <iostream>
using namespace std;

class GradeBook
{
private:
    int myID;
public:
    
    GradeBook(int id) : myID(id) {}

   void displayMessage() const
    {
        cout << "Welcome to the Grade Book!" << endl;
    }
    void printID() const
    {
        cout << "MYID ��: " << myID << endl;
    }
    void changeID(int newID)
    {
        myID = newID;
    }
}; 

int main()
{
    int MYID, newID;

    cout << "��JMY ID: ";
    cin >> MYID;

    GradeBook myGradeBook(MYID);
    myGradeBook.printID();

    cout << "��JchangeID: ";
    cin >> newID;

    myGradeBook.changeID(newID);
    myGradeBook.printID();
       
    return 0; 
} 
