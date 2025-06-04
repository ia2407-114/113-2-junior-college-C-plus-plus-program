#pragma once
#ifndef CARGO_H
#define CARGO_H

#include "flight_object.h"

class cargo : public flight_object {
private:
    string company;
    float max_capacity;

public:
    cargo();
    ~cargo();
    void display_cargo();
};

#endif
