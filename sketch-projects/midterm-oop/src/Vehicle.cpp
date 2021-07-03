// Built-int includes
#include <iostream>

// Own includes
#include "Vehicle.hpp"
#include "Person.hpp"

// Vehicle methods definitions
Vehicle::Vehicle(std::string plate, std::string color, Person& owner):
    m_plate{plate}, m_color{color}, m_owner{owner}{}

void Vehicle::toString()
{
    std::cout << "------ OWNER INFORMATION -----" << std::endl;
    std::cout << "Name: " << m_owner.get_name() << std::endl;
    std:: cout << "Age :" << m_owner.get_age() << std::endl;
    std::cout << "------ VEHICLE INFORMATION -----" << std::endl;
    std::cout << "Plate :" << m_plate << std::endl;
    std::cout << "Color :" << m_color << std::endl;
}

int Vehicle::get_owner_age()
{
    return m_owner.get_age();
}

// Motorcycle methods definition
std::string Motorcycle::get_type()
{
    return m_type;
}

// Car methods definition
int Car::get_numberOfGates()
{
    return m_numberOfGates;
}