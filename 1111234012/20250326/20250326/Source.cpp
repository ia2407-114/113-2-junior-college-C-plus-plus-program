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
            age = "輸入錯誤";
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

        cout << "狗的年齡是:\n" << getCourseAge() << "!"
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
            cout << "輸入錯誤!!" << endl;
        else
            courseName = name;
    }

    string getCourseName() const
    {
        return courseName;
    }

    void displayMessage() const
    {

        cout << "狗的名字是:\n" << getCourseName() << "!"
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

    cout << "狗的名字是: " << mydogname.getCourseName()
        << endl;
    cout << "狗的年齡是: " << mydogage.getCourseAge()
        << endl;

    cout << "\n輸入狗的名字:" << endl;
    getline(cin, nameOfCourse);
    cout << "\n輸入狗的年齡:" << endl;
    getline(cin, ageOfCourse);
    mydogname.setCourseName(nameOfCourse);
    mydogage.setCourseAge(ageOfCourse);
    cout << endl;
    mydogname.displayMessage();
    mydogage.displayAge();
}