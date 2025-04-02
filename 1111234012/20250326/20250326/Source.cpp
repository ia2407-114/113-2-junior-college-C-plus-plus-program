#include <iostream>
#include <string>
using namespace std;

class Dogage
{
public:

    explicit Dogage(string age)
    {
        courseAge = age;
    }

    void setCourseAge(string age)
    {
        if (age > "20")
        {
            age = "��J���~";
            cout << age << endl;
        }

        else
            courseAge = age;
    }

    string getCourseAge() const
    {
        return courseAge;
    }

    void displayAge() const
    {

        cout << "�����~�֬O:\n" << getCourseAge() << "!"
            << endl;
    }


private:
    string courseAge;
};

class Dogname
{
public:

    explicit Dogname(string name)
    {
        courseName = name;
    }

    void setCourseName(string name)
    {
        if (name == "")
            cout << "��J���~!!" << endl;
        else
            courseName = name;
    }

    string getCourseName() const
    {
        return courseName;
    }

    void displayMessage() const
    {

        cout << "�����W�r�O:\n" << getCourseName() << "!"
            << endl;
    }

private:
    string courseName;
};


int main()
{
    string nameOfCourse;
    string ageOfCourse;
    Dogname mydogname("pig");
    Dogage mydogage("3");

    cout << "�����W�r�O: " << mydogname.getCourseName()
        << endl;
    cout << "�����~�֬O: " << mydogage.getCourseAge()
        << endl;

    cout << "\n��J�����W�r:" << endl;
    getline(cin, nameOfCourse);
    cout << "\n��J�����~��:" << endl;
    getline(cin, ageOfCourse);
    mydogname.setCourseName(nameOfCourse);
    mydogage.setCourseAge(ageOfCourse);
    cout << endl;
    mydogname.displayMessage();
    mydogage.displayAge();
}