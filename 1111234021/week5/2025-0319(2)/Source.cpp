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
    cout << "請輸入年齡、性別(男M女F):" << endl;
    cout <<"預設年齡"<< myGradeBook.changeID() << "歲" << endl;
    cout << "預設性別: " << myGradeBook.changeMF() << endl;
    cout << "請輸入年齡" << endl;
    cin >> age;
    cout << "輸入性別(男M女F):";
    cin >> ch;
    if (isupper(ch) != 0)
    {
        cout << ch << "是大寫英文字母"<<endl;
        cout << "你的年齡是" << myGradeBook.printID(age) << endl;
        cout << "你的性別是" << myGradeBook.printMF(ch) << endl;
    }
    else
        cout << ch << "不是大寫英文字母";

    return 0;
}