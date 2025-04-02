//題目1. 利用上一次的題目2，將寵物類別與主程式分離，並且將類別的介面與實作在分離成兩個檔案，並且加以修改，當寵物名字長度超過10字元時，則擷取前10個字元當作他的姓名，最後將寵物的姓名印出。

#include "Dogname.h"
#include <iostream>
using namespace std;

Dogname::Dogname(string name)
{
   
    if (name.length() > 10)
    {
        courseName = name.substr(0, 10);
    }
    else
    {
        courseName = name; 
    }
}

void Dogname::setCourseName(string name)
{
    
    if (name.length() > 10)
    {
        courseName = name.substr(0, 10);
        cout << "名字長度超過 10，已將名字縮短為: " << courseName << endl;
    }
    else
    {
        courseName = name;
    }
}

string Dogname::getCourseName() const
{
    return courseName; 
}

void Dogname::displayMessage() const
{
    cout << "狗的名字是: " << courseName << "!" << endl;
}

