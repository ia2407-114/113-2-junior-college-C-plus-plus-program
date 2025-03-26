#include <iostream>
#include <string> 
using namespace std;


class PetDog
{
public:
    
    explicit PetDog(string dogName, int dogAge)
    {
        if (dogAge >= 0 && dogAge < 20) {
            name = dogName;
            age = dogAge;
        }
        else {
            cout << "年齡不合理，必須小於20歲！" << endl;
            name = "未知";
            age = 0;
        }
    }

   
    void setName(string dogName)
    {
        name = dogName;
    }

    
    void setAge(int dogAge)
    {
        if (dogAge >= 0 && dogAge < 20) {
            age = dogAge;
        }
        else {
            cout << "年齡不合理，必須小於20歲！" << endl;
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
        cout << "寵物狗的名字是: " << getName() << ", 年齡是: " << getAge() << " 歲" << endl;
    }

private:
    string name;
    int age;
};


int main()
{
    string nameOfDog; 
    int ageOfDog; 

    
    PetDog myDog("小狗", 3); 

    
    cout << "初始寵物狗的資訊：";
    myDog.displayMessage();

    
    cout << "\n請輸入寵物狗的名字: ";
    getline(cin, nameOfDog);
    cout << "請輸入寵物狗的年齡: ";
    cin >> ageOfDog; 

    
    myDog.setName(nameOfDog);
    myDog.setAge(ageOfDog);

    cout << endl; 
    myDog.displayMessage(); 

    return 0;
}
#include <iostream>
#include <string> 
using namespace std;


class PetDog
{
public:
    
    explicit PetDog(string dogName, int dogAge)
    {
        if (dogAge >= 0 && dogAge < 20) {
            name = dogName;
            age = dogAge;
        }
        else {
            cout << "年齡不合理，必須小於20歲！" << endl;
            name = "未知";
            age = 0;
        }
    }

    
    void setName(string dogName)
    {
        name = dogName;
    }

    
    void setAge(int dogAge)
    {
        if (dogAge >= 0 && dogAge < 20) {
            age = dogAge;
        }
        else {
            cout << "年齡不合理，必須小於20歲！" << endl;
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
        cout << "寵物狗的名字是: " << getName() << ", 年齡是: " << getAge() << " 歲" << endl;
    }

private:
    string name; 
    int age; 
};


int main()
{
    string nameOfDog; 
    int ageOfDog; 

    
    PetDog myDog("小狗", 3);

   
    cout << "初始寵物狗的資訊：";
    myDog.displayMessage(); 

    
    cout << "\n請輸入寵物狗的名字: ";
    getline(cin, nameOfDog);
    cout << "請輸入寵物狗的年齡: ";
    cin >> ageOfDog;

    
    myDog.setName(nameOfDog);
    myDog.setAge(ageOfDog);

    cout << endl; 
    myDog.displayMessage(); 

    return 0;
}
