/*dog.h 0402題目1.*/
/* 成員變數通常寫在 .h（標頭檔）裡*/
#include <iostream>
#include <string>
using namespace std;
class Dog
{
private:
    //定義成員變數
    string name; // 儲存狗的名字
    int age; // 儲存狗的年齡
public:
    Dog(string Name, int Age);
    void setInfo(string Name, int Age);
    string getName() const;
    int getAge() const;
    void displayMessage() const;
};
