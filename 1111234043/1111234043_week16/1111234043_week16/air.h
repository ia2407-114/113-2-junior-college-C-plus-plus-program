#ifndef FLIGHT_OBJECT_H
#define FLIGHT_OBJECT_H

#include <iostream>
#include <string>
using namespace std;

// ���檫�����O
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

// �j���Ⱦ����O
class airliner : public flight_object {
private:
    int passenger;
    int service_person;

public:
    airliner();
    ~airliner();
    void display_airliner();
};

// �f�����O
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
