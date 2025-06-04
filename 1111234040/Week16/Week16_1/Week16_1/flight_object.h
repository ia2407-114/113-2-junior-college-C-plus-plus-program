// flight_object.h
#ifndef FLIGHT_OBJECT_H
#define FLIGHT_OBJECT_H

#include <string>
using namespace std;

class flight_object {
protected:
    string name;
    int id;
    int pilot;
    float kerosene;

public:
    flight_object();
    virtual ~flight_object();
    void display() const;
};

class airliner : public flight_object {
private:
    int passenger;
    int service_person;

public:
    airliner();
    ~airliner();
    void display_airliner() const;
};

class cargo : public flight_object {
private:
    string company;
    float max_load;

public:
    cargo();
    ~cargo();
    void display_cargo() const;
};

#endif
