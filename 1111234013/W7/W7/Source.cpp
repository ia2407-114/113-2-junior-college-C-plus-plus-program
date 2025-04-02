#include <iostream>
#include <string> 
#include "dog.h"
using namespace std;


int main()
{
    string nameOfDog; //string�O�w�s���O  string of characters to store the course name
    DOG myDog1("Lucky", 12); // create a DOG �O�ϥΪ̦ۭq���O object named myGradeBook
    int age = 12;
    // display initial value of courseName
    cout << "Initial dog name is: %s \n" << myDog1.getName() << endl;
    cout << "Initial dog age is: %d \n" << myDog1.getAge() << endl;

    // prompt for, input and set course name
    cout << "\nPlease enter the dog name:" << endl;
    getline(cin, nameOfDog); // read a course name with blanks
    cout << "\nPlease enter the dog age:" << endl;
    cin >> age; // read a course name with blanks
    myDog1.setall(nameOfDog, age); // set the course name

    cout << endl; // outputs a blank line
    myDog1.displayMessage(); // display message with new course name
} // end main