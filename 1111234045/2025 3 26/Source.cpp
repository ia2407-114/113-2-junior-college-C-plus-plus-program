#include <iostream>
#include <string> 
using namespace std;
class Dog
{
public:
    
    Dog(string name = "nugget", int age = 5)
    {
        dogName = name;
        dogage = age;
    }
    void setdogName(string name)
    {
        dogName = name; 
    } 
    void setdogage(int age=0)
    {
        dogage = age; 
    }
    string getdogName() const
    {
        return dogName; 
    } 
    int getdogage() const
    {
        if (dogage <= 20)
            return dogage;
        else
            cout << "¦~ÄÖ¿ù»~\n";
        return dogage;
    } 
    void displayMessage() const
    {
        cout << "dog name: " << getdogName()<<"\n";
        cout << "dog age: " << getdogage() <<
            endl;
    } 
private:
    string dogName;
    int dogage ;
};   
int main()
{
    int dogage =0;
    string nameOfCourse; 
    Dog mydog; 
    cout << "Dog name is: " << mydog.getdogName()
        << endl;
    cout << "Dog age is: " << mydog.getdogage()
        << endl;
    cout << "\nPlease enter the Dog name:" << endl;
    getline(cin, nameOfCourse); 
    mydog.setdogName(nameOfCourse); 
    cout << "\nPlease enter the Dog age:" << endl;
    cin >>dogage; 
    mydog.setdogage(dogage);
    cout << endl; 
    mydog.displayMessage(); 
} 
