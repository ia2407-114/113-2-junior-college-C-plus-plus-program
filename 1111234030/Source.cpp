#include <iostream>
#include <string> 
#include "dogs.h"
using namespace std;

int main()
{
    string nameOfCourse;
    dogs mydog("pup", 12), hisdog("john", 3), herdog("diss", 4);
    int age = 1;

    cout << "Initial dog name is: " << mydog.getDogName() << "\nage is: " << mydog.getDogAge();

    cout << "\nPlease enter the dog name:" << endl;
    getline(cin, nameOfCourse);
    mydog.setDogName(nameOfCourse);
    mydog.setage(age);

    cout << endl;
    mydog.displayMessage();
}