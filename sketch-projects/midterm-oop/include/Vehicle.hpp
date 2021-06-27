#ifndef VEHICLE_H
#define VEHICLE_H

// Built-int includes
#include <iostream>

// Own includes
#include "Person.hpp"

class Vehicle
{
private:
    std::string m_plate;
    std::string m_color;
    Person& m_owner;

public:
    Vehicle(std::string plate, std::string color, Person& owner);

    void toString();
};

#endif