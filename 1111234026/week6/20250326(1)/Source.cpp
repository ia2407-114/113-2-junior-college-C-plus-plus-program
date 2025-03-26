#include <iostream>
#include <string>
using namespace std;

class Dog
{
public:
    explicit Dog(string name, int year)
    {
        if (year > 20 || year < 0)
            cout << "年齡不合理" << endl;
        else if (name == "")
        {            
            cout << "未輸入" << endl;
        }
        else
            dogName = name;
            dogAge = year;

    }

    void setYearOld(int year)
    {
        if (year > 20 || year < 0)
            cout << "年齡不合理" << endl;
        else
            dogAge = year;
    }

    void setName(string name)
    {
        if (name =="")
            cout << "未輸入" << endl;
        else
            dogName = name;
    }

    string getName() const
    {
        return dogName;
    }

    void displayMessage() const
    {
        cout << "歡迎來到狗狗 " << getName() << " 的世界，牠的年齡是 " << dogAge << " 歲！" << endl;
    }

private:
    int dogAge =0;
    string dogName ="";
};

int main()
{
    string nameOfDog;
    int ageOfDog;

    cout << "請輸入狗狗的名字:" << endl;
    getline(cin, nameOfDog);

    cout << "請輸入狗狗的年齡:" << endl;
    cin >> ageOfDog;

    Dog myDog(nameOfDog, ageOfDog);

    cout << "\n狗狗信息如下:" << endl;
    myDog.displayMessage();

    cout << "\n請輸入狗狗名字:" << endl;
    cin.ignore();
    getline(cin, nameOfDog); 
    myDog.setName(nameOfDog); 

    cout << "請輸入狗狗年齡:" << endl;
    cin >> ageOfDog; 
    myDog.setYearOld(ageOfDog); 

    cout << "\n修改後的狗狗信息如下:" << endl;
    myDog.displayMessage();

    return 0;
}
