#pragma once
#ifndef FLIGHT_OBJECT_H
#define FLIGHT_OBJECT_H

#include <iostream>
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
    void display();
};

#endif
