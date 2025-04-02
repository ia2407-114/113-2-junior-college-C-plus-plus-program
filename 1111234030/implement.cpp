#include <iostream>
#include <string>
#include "dogs.h"
using namespace std;

int age;
string name;

dogs::dogs(string name, int age) {
        DogName = name;
        dogage = age;
    }

    void dogs::setDogName(string name)
    {
        if (name.size() <= 10) {
            DogName = name;
        }
        else if (name.size() > 10){

            DogName = name.substr(0,10);

        }
        
    }

    string dogs::getDogName()
    {
        return DogName;
    }

    int dogs::getDogAge() {
        return dogage;
    }

    void dogs::displayMessage()
    {
        cout << "dog's name is: " << DogName << endl;
        cout << "dog's age is: " << dogage;
    }

    int dogs::setage(int age) {
        cout << "please enter dog age:";
        cin >> age;
        while (age > 20) {
            cout << "dog's should not be older than 20\nplease enter again: ";
            cin >> age;
        }
        dogage = age;
        return dogage;
    };
