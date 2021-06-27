// Built-int includes
#include <iostream>

// Own includes
#include "Vehicle.hpp"
#include "Person.hpp"

Vehicle::Vehicle(std::string plate, std::string color, Person& owner):
    m_plate{plate}, m_color{color}, m_owner{owner}{}

void Vehicle::toString()
{
    std::cout << "------ OWNER INFORMATION -----" << std::endl;
    std::cout << "Name: " << m_owner.get_name() << std::endl;
    std:: cout << "Age :" << m_owner.get_age() << std::endl; 
}