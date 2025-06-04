#pragma once
#include <string>
#include <iostream>
using namespace std;

class flight_object {
private:
    string name;
    int id;
    int pilot;
    float kerosene;

public:
    flight_object();
    void display();
};

class airliner : public flight_object {
private:
    int passenger;
    int service_person;

public:
    airliner();
    ~airliner();
    void display_airliner();
};

class cargo : public flight_object {
private:
    string company;
    float max_load;

public:
    cargo();
    ~cargo();
    void display_cargo();
};
