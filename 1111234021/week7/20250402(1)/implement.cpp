#include <iostream>
#include <string>
#include "Dog.h"  // 引用標頭檔

//Dog::Dog(string name, int year)
//{
 //   if (year > 20 || year < 0)
//        cout << "年齡不合理" << endl;
//    else if (name == "")
 //   {
 //       cout << "未輸入" << endl;
 //       dogName = "未知";  // 如果名稱為空，給予預設值
 //   }
//}

void Dog::setYearOld(int year)
{
    if (year > 20 || year < 0)
        cout << "年齡不合理" << endl;
    else
        dogAge = year;
}

void Dog::setName(string name)
{
    if (name.length() > 10) {
        dogName = name.substr(0, 10);  
    }
    else {
        dogName = name;
    }
}

string Dog::getName() const
{
    return dogName;
}

void Dog::displayMessage() const
{
    cout << "歡迎來到狗狗 " << dogName << " 的世界，牠的年齡是 " << dogAge << " 歲！" << endl;
}
