#pragma once  // 防止重複包含
#include <iostream>
#include <string>
using namespace std;

class Dog
{
public:
  //  explicit Dog(string name, int year);  // 類別的建構函數宣告
    void setYearOld(int year);
    void setName(string name);
    string getName() const;
    void displayMessage() const;

private:
    int dogAge=0;
    string dogName="";
};
