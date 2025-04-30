// Fig. 9.7: CreateAndDestroy.h
// CreateAndDestroy class definition.
// Member functions defined in CreateAndDestroy.cpp.
#include <string>
using namespace std;

#ifndef CREATE_H
#define CREATE_H

class CreateAndDestroy
{
public:
	CreateAndDestroy(int, string); // constructor
	~CreateAndDestroy(); // destructor
private:
	int objectID; // ID number for object
	string message; // message describing object
}; // end class CreateAndDestroy

#endif
