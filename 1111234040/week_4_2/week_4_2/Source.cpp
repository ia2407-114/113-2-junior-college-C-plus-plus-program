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
        cout << "歡迎使用成績簿！" << endl;
    }

    
    void changeID(int newID)
    {
        myID = newID;
    }

   
    void printID() const
    {
        cout << "目前的 ID: " << myID << endl;
    }

    
    void setAge(int newAge)
    {
        if (newAge >= 0 && newAge <= 99)
        {
            age = newAge;
        }
        else
        {
            cout << "錯誤：年齡必須介於 0 到 99 之間！" << endl;
        }
    }

    
    void printAge() const
    {
        cout << "目前的年齡: " << age << endl;
    }

    
    void setGender(char newGender)
    {
        if (newGender == 'M' || newGender == 'F')
        {
            gender = newGender;
        }
        else
        {
            cout << "看來你是無性別論者" << endl;
        }
    }

    void printGender() const
    {
        cout << "目前的性別: " << gender << endl;
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
    cout << "請輸入新的 ID: ";
    cin >> newID;
    myGradeBook.changeID(newID);
    myGradeBook.printID();

   
    int newAge;
    cout << "請輸入新的年齡 (0~99): ";
    cin >> newAge;
    myGradeBook.setAge(newAge);
    myGradeBook.printAge();

   
    char newGender;
    cout << "請輸入新的性別 (M(男性) 或 F(女性)): ";
    cin >> newGender;
    myGradeBook.setGender(newGender);
    myGradeBook.printGender();

    return 0;
}