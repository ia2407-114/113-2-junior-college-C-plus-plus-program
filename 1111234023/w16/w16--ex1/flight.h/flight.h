#include <iostream>
#include <string>
using namespace std;

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

// ¤j«¬«È¾÷Ãþ§O
class airliner : public flight_object {
private:
    int passenger;
    int service_person;

public:
    airliner();
    ~airliner();
    void display_airliner();
};

// ³f¾÷Ãþ§O
class cargo : public flight_object {
private:
    string rental_company;
    float max_load;

public:
    cargo();
    ~cargo();
    void display_cargo();
};