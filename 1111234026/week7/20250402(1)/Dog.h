#pragma once  // ����ƥ]�t
#include <iostream>
#include <string>
using namespace std;

class Dog
{
public:
  //  explicit Dog(string name, int year);  // ���O���غc��ƫŧi
    void setYearOld(int year);
    void setName(string name);
    string getName() const;
    void displayMessage() const;

private:
    int dogAge=0;
    string dogName="";
};
