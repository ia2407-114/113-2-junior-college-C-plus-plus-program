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
    virtual ~flight_object();  // 加 virtual，支援多型安全解構
    void display();
};

class airliner : public flight_object {
private:
    int passenger;
    int service_person;

public:
    airliner();
    ~airliner();  // 不需 virtual，因為 flight_object 已定義為 virtual
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
