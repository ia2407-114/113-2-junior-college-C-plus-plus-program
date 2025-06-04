#pragma once
#ifndef AIRLINER_H
#define AIRLINER_H

#include "flight_object.h"

class airliner : public flight_object {
private:
    int passenger;
    int service_person;

public:
    airliner();
    ~airliner();
    void display_airliner();
};

#endif
