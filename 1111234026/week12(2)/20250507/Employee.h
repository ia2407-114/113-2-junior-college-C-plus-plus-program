// Fig. 9.27: Employee.h
// Employee class definition with a static data member to 
// track the number of Employee objects in memory
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee
{
public:
	Employee(const std::string&, const std::string&); // constructor
	~Employee(); // destructor
	std::string getFirstName() const; // return first name
	std::string getLastName() const; // return last name

	// static member function
	static unsigned int getCount(); // return # of objects instantiated
private:
	std::string firstName;
	std::string lastName;

	// static data
	static unsigned int count; // number of objects instantiated
}; // end class Employee

#endif