#include <iostream>
#include <string>
using namespace std;
class Dog
{
private:
    string name;
    int age;
public:
    Dog(string Name, int Age);
    void setInfo(string Name, int Age);
    string getName() const;
    int getAge() const;
    void displayMessage() const;
};
