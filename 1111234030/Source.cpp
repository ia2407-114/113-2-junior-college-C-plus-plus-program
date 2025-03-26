#include <iostream>
#include <string> 
using namespace std;

class dogs
{
public:
    explicit dogs(string name, int age){
        DogName = name;
        dogage = age;
    }

    void setDogName(string name)
    {
        DogName = name;
    }

    string getDogName() const
    {
        return DogName;
    }

    int getDogAge() const {
        return dogage;
    }

    void displayMessage() const
    {
        cout << "dog's name is: " << DogName << endl;
        cout << "dog's age is: " << dogage;
    }

    int setage(int age) {
        cout << "please enter dog age:";
        cin >> age;
        while (age > 20) {
            cout << "dog's should not be older than 20\nplease enter again: ";
            cin >> age;
        }
        dogage = age;
        return dogage;
    }

private:
    string DogName;
    int dogage;
}; 

int main()
{
    string nameOfCourse;
    dogs mydog("pup", 12),hisdog("john", 3),herdog("diss",4);
    int age =1;

    cout << "Initial dog name is: " << mydog.getDogName() << "\nage is: " << mydog.getDogAge();

    cout << "\nPlease enter the dog name:" << endl;
    getline(cin, nameOfCourse); 
    mydog.setDogName(nameOfCourse); 
    mydog.setage(age);

    cout << endl;
    mydog.displayMessage();
}