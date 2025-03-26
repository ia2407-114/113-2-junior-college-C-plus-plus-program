#include <iostream>
#include <string> // program uses C++ standard string class
using namespace std;

// GradeBook class definition
class GradeBook
{
public:
    // function that sets the course name
    void SDN(string name,int age)
    {
        DA = age;
        DN = name; // store the course name in the object
    } // end function setCourseName

    // function that gets the course name
    string GDN() const
    {
        return DN; // return the object's courseName
    } // end function getCourseName
    int Getdogage() const
    {
        return DA;
    }
    // function that displays a welcome message
    void displayMessage() const
    {
        // this statement calls getCourseName to get the 
        // name of the course this GradeBook represents
        cout << "Welcome to the dogbook for\n" <<GDN() << "!"
            << endl;
        cout << "Age:" << Getdogage() << "years old."<< endl;
    } // end function displayMessage
private:
    string DN;
    int DA;// course name for this GradeBook
}; // end class GradeBook  

// function main begins program execution
int main()
{
    string nameOfD;
    int ageOfd;// string of characters to store the course name
    GradeBook mydogName; // create a GradeBook object named myGradeBook

    // display initial value of courseName
    cout << "Initial course name is: " << mydogName.GDN()
        << endl;

    // prompt for, input and set course name
    cout << "\nPlease enter the dog name:" << endl;
    getline(cin, nameOfD); // read a course name with blanks
    cout << "\nPlease enter the dog age:" << endl;
    cin >> ageOfd;
    if (ageOfd>=20)
    {
        cout<< "\nPlease enter the dog age(don't more than 20 or same at 20):" << endl;
        cin >> ageOfd;
    }
    
 
        mydogName.SDN(nameOfD, ageOfd);
  

    cout << endl; // outputs a blank line
    mydogName.displayMessage(); // display message with new course name
} // end main