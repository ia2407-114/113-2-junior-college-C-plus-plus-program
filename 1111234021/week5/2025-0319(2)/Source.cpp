#include <iostream>
#include <string> 
#include <cctype>
using namespace std;

class GradeBook
{
private:
    int age = 10;
    char mf = 'M';
public:
    int changeID()
    {
        return age;
    }
    char changeMF()
    {
        return mf; 
    }
    int printID(int Age)
    {
        if (Age>=0&&Age<=99)
        {
        age = Age;
        return age;
        }
    }
    char printMF(char MF)
    {
        mf = MF;
        return mf;
    }

    string courseName;
}; 

int main()
{
    GradeBook myGradeBook;
    int age;
    char ch;
    cout << "�п�J�~�֡B�ʧO(�kM�kF):" << endl;
    cout <<"�w�]�~��"<< myGradeBook.changeID() << "��" << endl;
    cout << "�w�]�ʧO: " << myGradeBook.changeMF() << endl;
    cout << "�п�J�~��" << endl;
    cin >> age;
    cout << "��J�ʧO(�kM�kF):";
    cin >> ch;
    if (isupper(ch) != 0)
    {
        cout << ch << "�O�j�g�^��r��"<<endl;
        cout << "�A���~�֬O" << myGradeBook.printID(age) << endl;
        cout << "�A���ʧO�O" << myGradeBook.printMF(ch) << endl;
    }
    else
        cout << ch << "���O�j�g�^��r��";

    return 0;
}