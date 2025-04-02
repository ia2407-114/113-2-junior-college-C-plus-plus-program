//題目1: 建立一個可以讓使用者透過鍵盤輸入、設定(set)以及取得(get)寵物狗的名字(string name)及年齡(int age)的C++程式，程式碼需滿足:
//1.要有設定(set)、取得(get)、列印的方法(成員函數)
//2.設定(set)成員函數裡需判斷狗的年齡是否合理(< 20)

//題目2: 承上題，請使用建構子(constructor)建立一個寵物狗類別，可以讓使用者在宣告新的物件(寵物狗)時，給予名字與年齡，並可透過鍵盤輸入並“直接”設定寵物狗屬性(姓名、年齡)的程式。

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
    Dogname mydogname("來財");
    Dogage mydogage("00");

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