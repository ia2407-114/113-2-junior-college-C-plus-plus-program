#include <iostream>
#include <string>
#include "Dogname.h"
using namespace std;

int main()
{
    string nameOfCourse;   
    Dogname mydogname("DOGNAME");  

    
    cout << "狗的名字是: " << mydogname.getCourseName() << endl;

    cout << "\n請輸入狗的名字:" << endl;
    getline(cin, nameOfCourse);

    
    if (!nameOfCourse.empty()) {
        mydogname.setCourseName(nameOfCourse); 
    }

    
    cout << endl;
    mydogname.displayMessage();  

    return 0;
}