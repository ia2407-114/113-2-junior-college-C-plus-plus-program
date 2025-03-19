#include <iostream>
using namespace std;


class GradeBook
{
private:
    int myID;   
    int age;    
    char gender; 

public:
    
    GradeBook() : myID(0), age(0), gender('M') {} 

   
    void displayMessage() const
    {
        cout << "�w��ϥΦ��Zï�I" << endl;
    }

    
    void changeID(int newID)
    {
        myID = newID;
    }

   
    void printID() const
    {
        cout << "�ثe�� ID: " << myID << endl;
    }

    
    void setAge(int newAge)
    {
        if (newAge >= 0 && newAge <= 99)
        {
            age = newAge;
        }
        else
        {
            cout << "���~�G�~�֥������� 0 �� 99 �����I" << endl;
        }
    }

    
    void printAge() const
    {
        cout << "�ثe���~��: " << age << endl;
    }

    
    void setGender(char newGender)
    {
        if (newGender == 'M' || newGender == 'F')
        {
            gender = newGender;
        }
        else
        {
            cout << "�ݨӧA�O�L�ʧO�ת�" << endl;
        }
    }

    void printGender() const
    {
        cout << "�ثe���ʧO: " << gender << endl;
    }
};


int main()
{
    GradeBook myGradeBook; 
    myGradeBook.displayMessage();

    
    myGradeBook.printID();
    myGradeBook.printAge();
    myGradeBook.printGender();

    
    int newID;
    cout << "�п�J�s�� ID: ";
    cin >> newID;
    myGradeBook.changeID(newID);
    myGradeBook.printID();

   
    int newAge;
    cout << "�п�J�s���~�� (0~99): ";
    cin >> newAge;
    myGradeBook.setAge(newAge);
    myGradeBook.printAge();

   
    char newGender;
    cout << "�п�J�s���ʧO (M(�k��) �� F(�k��)): ";
    cin >> newGender;
    myGradeBook.setGender(newGender);
    myGradeBook.printGender();

    return 0;
}