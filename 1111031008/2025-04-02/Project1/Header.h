#ifndef Header_H
#define Header_H

#include <string>

class Dog {
private:
    std::string name;
    int age;

public:
    Dog(const std::string& dogName, int dogAge);
    
    void setName(const std::string& dogName);
    void setAge(int dogAge);

    std::string getName() const;
    int getAge() const;

    void displayInfo() const;
};

#endif // Header_H
