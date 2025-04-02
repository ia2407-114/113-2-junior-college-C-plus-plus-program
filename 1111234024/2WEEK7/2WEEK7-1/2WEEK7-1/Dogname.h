//題目1. 利用上一次的題目2，將寵物類別與主程式分離，並且將類別的介面與實作在分離成兩個檔案，並且加以修改，當寵物名字長度超過10字元時，則擷取前10個字元當作他的姓名，最後將寵物的姓名印出。

#ifndef DOGNAME_H
#define DOGNAME_H

#include <string>
using namespace std;

class Dogname
{
public:
    explicit Dogname(string name = "無名狗"); 
    void setCourseName(string name); 
    string getCourseName() const;   
    void displayMessage() const;   

private:
    string courseName; 
};

#endif
