#pragma once
#include <iostream>
#include <string>
using namespace std;

class dogs
{
private:
    string DogName;
    int dogage;

public:

    explicit dogs(string name, int age);

    void setDogName(string name);

    string getDogName();

    int getDogAge();

    void displayMessage();

    int setage(int age);

};