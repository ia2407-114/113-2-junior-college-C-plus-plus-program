#ifndef FLIGHT_OBJECT_H
#define FLIGHT_OBJECT_H

#include <iostream>
#include <string>
using namespace std;

// 飛行物體類別
class flight_object {
private:
    string name;
    int id;
    int pilot;
    float kerosene;

public:
    flight_object();
    virtual ~flight_object();
    void display();
};

// 大型客機類別
class airliner : public flight_object {
private:
    int passenger;
    int service_person;

public:
    airliner();
    ~airliner();
    void display_airliner();
};

// 貨機類別
class cargo : public flight_object {
private:
    string company;
    float max_load;

public:
    cargo();
    ~cargo();
    void display_cargo();
};

#endif
