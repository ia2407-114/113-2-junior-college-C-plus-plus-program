#include <iostream>
#include "Employee.h" 
#include "Date.h" 
using namespace std;

Employee::Employee(const string& na,
    const Date& birth, const Date& hire)
    : name(na),
    birthDate(birth), 
    hireDate(hire) 
{
    
}

Employee& Employee::setname(const string& na) {
    name = na;

    return *this;
}

Employee& Employee::print()
{
    cout << name << "  �J¾��: ";
    hireDate.print();
    cout << "  �ͤ�: ";
    birthDate.print();
    cout << endl;

    return *this;
} 

Employee::~Employee()
{
    cout << "Employee object destructor: "
        << name << endl;
}