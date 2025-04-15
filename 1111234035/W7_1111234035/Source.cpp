#include <iostream>
#include <string> // program uses C++ standard string class
#include "gradebook.h"
using namespace std;


// function main begins program execution
int main()
{
    string nameOfCourse; // 用於儲存狗名
    GradeBook myGradeBook("Dogs Networks");
    int pass = 1234;
    // display initial value of courseName
    cout << "Initial dog name is: " << myGradeBook.getCourseName()
        << endl;

    // 提示、輸入和設定課程名稱
    cout << "\n新增新的狗名:" << endl;
    getline(cin, nameOfCourse); // read a course name with blanks
    myGradeBook.setCourseName(nameOfCourse); // 設置狗名

    cout << endl; // 輸出一行空白
    myGradeBook.displayMessage(); // 輸出新的狗名
} // end main

