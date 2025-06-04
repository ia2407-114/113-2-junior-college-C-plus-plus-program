#ifndef FLIGHT_CLASSES_H
#define FLIGHT_CLASSES_H

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
    virtual ~flight_object();  // �[ virtual�A�䴩�h���w���Ѻc
    void display();
};

class airliner : public flight_object {
private:
    int passenger;
    int service_person;

public:
    airliner();
    ~airliner();  // ���� virtual�A�]�� flight_object �w�w�q�� virtual
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

#endif
