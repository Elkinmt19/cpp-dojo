// Built-int includes
#include <iostream>
#include <list>

// Own includes
#include "VehicleWash.hpp"

VehicleWash::VehicleWash(std::string name):m_name{name}{}

void VehicleWash::addVehicle(Vehicle& vehicle)
{
    m_listOfVehicles.push_back(&vehicle);
}

void VehicleWash::toString()
{
    std::cout << "**********VEHICLE WASH INFORMATION**********" << std::endl;
    std::cout << "Name: " << m_name << std::endl;
    std::cout << "Number of current vehicles : " << m_listOfVehicles.size() << std::endl;
    std::cout << "++++++++++++VEHICLE INFORMATION++++++++++++" << std::endl;
    for (Vehicle* i : m_listOfVehicles)
    {
        i->toString();
        if (i->get_vehicle_type() == "motorcycle")
        {
            std::cout << "Type of motorcycle: " << i->get_type() << std::endl;
        }
        if (i->get_vehicle_type() == "car")
        {
            std::cout << "Number of gates: " << i->get_numberOfGates() << std::endl;
        }
    }
}

float VehicleWash::CalculateGain()
{
    float Gain = 0.0;
    for (Vehicle* i : m_listOfVehicles)
    {
        if (i->get_vehicle_type() == "motorcycle")
        {
            Gain += 7000;
            if (i->get_owner_age() >= 60) { Gain -= 1400;}
        }
        if (i->get_vehicle_type() == "car")
        {
            Gain += 12000;
            if (i->get_owner_age() >= 60) { Gain -= 2400;}
        }
    }
    return Gain;
}