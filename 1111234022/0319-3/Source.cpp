#include <iostream>
#include <cctype>

using namespace std;

class GradeBook
{
private:
    int age = 0;
    char g = 'e';

public:
    int printid() const    
    {
        return age;
    }
    void changeID(int a)  
    {
        if (a > 0 && a < 99)
            age = a;
        else
            cout << "輸入錯誤 ";              
    }

    char printgender()
    {
        return g;    
    }

    void changeID(char in_g)  
    {
        if (isupper(in_g) != 0)
        {
            if (in_g == 'M' || in_g == 'F')
                g = in_g;        
        }           
        else

            cout << "輸入錯誤 ";

    }
};

int main()
{
    int a = 0;
    char in_g;
    GradeBook myGradeBook;
    cout << "原age " << myGradeBook.printid() << endl; 
    cout << "輸入age(範圍介於0~99) ";  
    cin >> a;
    myGradeBook.changeID(a);   
    cout << "變更後age " << myGradeBook.printid() << endl; 

    cout << "原性別 " << myGradeBook.printgender() << endl; 
    cout << "輸入性別(限定M或F) ";
    cin >> in_g;
    myGradeBook.changeID(in_g);
    cout << "變更後age " << myGradeBook.printgender() << endl;


}