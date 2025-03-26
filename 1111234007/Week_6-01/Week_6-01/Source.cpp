//題目1: 建立一個可以讓使用者透過鍵盤輸入、設定(set)以及取得(get)寵物狗的名字(string name)及年齡(int age)的C++程式，程式碼需滿足:
//1.要有設定(set)、取得(get)、列印的方法(成員函數)
//2.設定(set)成員函數裡需判斷狗的年齡是否合理(< 20)
//題目2: 承上題，請使用建構子(constructor)建立一個寵物狗類別，可以讓使用者在宣告新的物件(寵物狗)時，
//給予名字與年齡，並可透過鍵盤輸入並“直接”設定寵物狗屬性(姓名、年齡)的程式。
#include <iostream>
#include <string>
using namespace std;


class Dog
{
private:
    string name;
    int age;

public:
    Dog(string n, int a) {
        name = n;
        age = a;
    }

    void setInfo(string n, int a)
    {
        if (a > 0 && a < 20) {
            name = n;
            age = a;
        }
        else {
            cout << "無效的年齡!請輸入0-20" << endl;
        }
    }

    string getName() const
    {
        return name;
    }

    int getAge() const
    {
        return age;
    }

    void displayMessage() const
    {
        cout << "狗狗名稱:" << getName() << endl
            << "狗狗年齡:" << getAge() << endl;
    }
};

int main()
{
    string dogName;
    int age;
    Dog myDog("youan", 6);

    cout << "預設資料" << endl;
    myDog.displayMessage();

    cout << "\n請輸入狗狗的名稱:";
    getline(cin, dogName);
    cout << "\n請輸入狗狗的年齡:";
    cin >> age;
    myDog.setInfo(dogName, age);

    cout << endl;
    myDog.displayMessage();
}