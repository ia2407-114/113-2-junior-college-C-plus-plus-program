/*0326 題目1: 建立一個可以讓使用者透過鍵盤輸入、設定(set)以及取得(get)寵物狗的名字(string name)及年齡(int age)的C++程式，程式碼需滿足:
1.要有設定(set)、取得(get)、列印的方法(成員函數)
2.設定(set)成員函數裡需判斷狗的年齡是否合理(<20)*/

/*題目2: 承上題，請使用建構子(constructor)建立一個寵物狗類別，可以讓使用者在宣告新的物件(寵物狗)時，給予名字與年齡，
並可透過鍵盤輸入並“直接”設定寵物狗屬性(姓名、年齡)的程式。*/

#include <iostream>
#include <string> // 使用 C++ 標準字串類別
using namespace std;

// DOG 類別定義
class DOG
{
public:
    // 建構子: 在建立物件時直接初始化狗的名字與年齡
    explicit DOG(string name, int age)
    {
        DogName = name;
        DogAge = age;
    }

    // 設定狗的名字與年齡
    void setDogName_and_Age(string name, int age)
    {
        if (age < 20) // 檢查年齡是否合理
        {
            DogName = name;
            DogAge = age;
        }
        else
            cout << "It's too old!!! Invalid data!" << endl;
    }

    // 取得狗的名字
    string getDogName() const
    {
        return DogName;
    }

    // 取得狗的年齡
    int getDogAge() const
    {
        return DogAge;
    }

    // 顯示狗的資訊
    void displayMessage() const
    {
        // 修正格式化輸出
        cout << "This is my dog named " << getDogName() << "!" << endl;
        cout << "My dog is now " << getDogAge() << " years old!" << endl;
    }

private:
    string DogName; // 存放狗的名字
    int DogAge; // 存放狗的年齡
};

// main 函式開始程式執行
int main()
{
    string nameOfDog; // 儲存狗的名字
    int age = 12; // 預設狗的年齡

    // 使用建構子建立 DOG 物件並初始化屬性
    DOG myDog1("Lucky", age);

    // 顯示初始值
    cout << "Initial dog name is: " << myDog1.getDogName() << endl;
    cout << "Initial dog age is: " << myDog1.getDogAge() << endl;

    // 提示使用者輸入狗的名字
    cout << "\nPlease enter the dog name:" << endl;
    getline(cin, nameOfDog);

    // 提示使用者輸入狗的年齡
    cout << "\nPlease enter the dog age:" << endl;
    cin >> age;

    // 設定狗的名字與年齡
    myDog1.setDogName_and_Age(nameOfDog, age);

    cout << endl; // 輸出空行
    myDog1.displayMessage(); // 顯示狗的資訊

    return 0;
} // main 函式結束
