//�D��1. �Эק�H�W�{���X�A�إߤ@�Өp��(private)�����ܼ� myID�A�ä��O�إ�changeID()�PprintID()������ơA�Q�γo�Ǧ�����ơA���L�X�ثeID�A�A�ק�ثeID�A�̫�b�L�X�ק�᪺ID�C
// Fig. 3.1: fig03_01.cpp
// Define class GradeBook with a member function displayMessage;
// Create a GradeBook object and call its displayMessage function.
#include <iostream>
using namespace std;

class GradeBook
{
private:
    int myID ;    

public:

     int printID(int myID) const
     {
         cout << "��JmyID:";
         cin >> myID ;
         cout << "myID��:" << myID << endl;
         return myID;
     }

     void changeID(int ID)
     {
      cout << "��JchangeID:";
      cin >> ID ;       
      myID = ID;
      cout << "changeID��:" << myID;
     }

    void displayMessage() const
    {
        cout << "Welcome to the Grade Book!" << endl;
    } 
};   


int main()
{
    GradeBook myGradeBook{}; 
    myGradeBook.printID(0);
    myGradeBook.changeID(0);

    return 0 ;
}                                                                                                                                                                                                                                                                                                                                                                                      