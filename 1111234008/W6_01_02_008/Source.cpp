//�D��1: �إߤ@�ӥi�H���ϥΪ̳z�L��L��J�B�]�w(set)�H�Ψ��o(get)�d�������W�r(string name)�Φ~��(int age)��C++�{���A�{���X�ݺ���:
//1.�n���]�w(set)�B���o(get)�B�C�L����k(�������)
//2.�]�w(set)������Ƹ̻ݧP�_�����~�֬O�_�X�z(< 20)

//�D��2: �ӤW�D�A�ШϥΫغc�l(constructor)�إߤ@���d�������O�A�i�H���ϥΪ̦b�ŧi�s������(�d����)�ɡA�����W�r�P�~�֡A�åi�z�L��L��J�á��������]�w�d�����ݩ�(�m�W�B�~��)���{���C

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
    Dogname mydogname("�Ӱ]");
    Dogage mydogage("00");

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