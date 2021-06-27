#ifndef VEHICLE_WASH_H
#define VEHICLE_WASH_H

// Built-int includes
#include <iostream>
#include <list>

// Own includes
#include "Vehicle.hpp"

class VehicleWash
{
private:
    std::string m_name;
    std::list<Vehicle> m_listOfVehicles;

public:
    VehicleWash(std::string name);

    void addVehicle(Vehicle& vehicle);

    void toString();

    float CalculateGain();
};

#endif