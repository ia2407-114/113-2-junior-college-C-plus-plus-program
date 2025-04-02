#include <iostream>
#include <string>
using namespace std;

class Dog
{
private:
    string name;
    int age;

public:
    Dog(string n, int a);
    void setInfo(string n, int a);
    string getName() const;
    int getAge() const;
    void displayMessage() const;
};
