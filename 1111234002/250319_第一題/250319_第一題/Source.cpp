/*�D��1. �Эק�H�W�{���X�A�إߤ@�Өp��(private)�����ܼ� myID�A
�ä��O�إ�changeID()�PprintID()������ơA�Q�γo�Ǧ�����ơA
���L�X�ثeID�A�A�ק�ثeID�A�̫�b�L�X�ק�᪺ID�C*/



#include <iostream>
using namespace std;

class GradeBook
{
private:

    int myID = 12345;  

public:

    void displayMessage() const
    {
        cout << "Welcome to the Grade Book!" << endl;
    }


    void printID() const
    {
        cout << "�ثe�� ID�G" << myID << endl;
    }

   
    void changeID(int newID)
    {
        myID = newID;
    }
};

int main()
{
    GradeBook myGradeBook; 

    myGradeBook.displayMessage(); 
    myGradeBook.printID();       

    myGradeBook.changeID(67890);  
    myGradeBook.printID();       
}
