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
            cout << "�~�֤��X�z�A�����p��20���I" << endl;
            name = "����";
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
            cout << "�~�֤��X�z�A�����p��20���I" << endl;
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
        cout << "�d�������W�r�O: " << getName() << ", �~�֬O: " << getAge() << " ��" << endl;
    }

private:
    string name;
    int age;
};


int main()
{
    string nameOfDog; 
    int ageOfDog; 

    
    PetDog myDog("�p��", 3); 

    
    cout << "��l�d��������T�G";
    myDog.displayMessage();

    
    cout << "\n�п�J�d�������W�r: ";
    getline(cin, nameOfDog);
    cout << "�п�J�d�������~��: ";
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
            cout << "�~�֤��X�z�A�����p��20���I" << endl;
            name = "����";
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
            cout << "�~�֤��X�z�A�����p��20���I" << endl;
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
        cout << "�d�������W�r�O: " << getName() << ", �~�֬O: " << getAge() << " ��" << endl;
    }

private:
    string name; 
    int age; 
};


int main()
{
    string nameOfDog; 
    int ageOfDog; 

    
    PetDog myDog("�p��", 3);

   
    cout << "��l�d��������T�G";
    myDog.displayMessage(); 

    
    cout << "\n�п�J�d�������W�r: ";
    getline(cin, nameOfDog);
    cout << "�п�J�d�������~��: ";
    cin >> ageOfDog;

    
    myDog.setName(nameOfDog);
    myDog.setAge(ageOfDog);

    cout << endl; 
    myDog.displayMessage(); 

    return 0;
}
