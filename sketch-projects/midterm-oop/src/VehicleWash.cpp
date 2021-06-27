// Built-int includes
#include <iostream>
#include <list>
#include <typeinfo>

// Own includes
#include "VehicleWash.hpp"

VehicleWash::VehicleWash(std::string name):m_name{name}{}

void VehicleWash::addVehicle(Vehicle& vehicle)
{
    m_listOfVehicles.push_back(vehicle);
}

void VehicleWash::toString()
{
    std::cout << "**********VEHICLE WASH INFORMATION**********" << std::endl;
    std::cout << "Name: " << m_name << std::endl;
    std::cout << "Number of current vehicles : " << m_listOfVehicles.size() << std::endl;
    std::cout << "++++++++++++VEHICLE INFORMATION++++++++++++" << std::endl;
    for (Vehicle i : m_listOfVehicles)
    {
        i.toString();
    }
}

float VehicleWash::CalculateGain()
{
    float Gain = 0.0;
    for (Vehicle i : m_listOfVehicles)
    {
        std::cout << typeid(i).name() << std::endl;
    }
    return 0.0;
}