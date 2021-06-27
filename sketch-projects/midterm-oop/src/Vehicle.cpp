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

void Vehicle::set_plate(std::string n_plate)
{
    m_plate = n_plate;
}

void Vehicle::set_color(std::string n_color)
{
    m_color = n_color;
}

void Vehicle::set_owner(Person& n_owner)
{
    m_owner = n_owner;
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