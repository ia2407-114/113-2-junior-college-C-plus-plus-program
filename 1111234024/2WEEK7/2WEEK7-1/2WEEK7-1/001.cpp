#include <iostream>
#include <string>
#include "Dogname.h"
using namespace std;

int main()
{
    string nameOfCourse;   
    Dogname mydogname("DOGNAME");  

    
    cout << "�����W�r�O: " << mydogname.getCourseName() << endl;

    cout << "\n�п�J�����W�r:" << endl;
    getline(cin, nameOfCourse);

    
    if (!nameOfCourse.empty()) {
        mydogname.setCourseName(nameOfCourse); 
    }

    
    cout << endl;
    mydogname.displayMessage();  

    return 0;
}