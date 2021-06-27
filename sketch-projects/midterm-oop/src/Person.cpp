// Built-int includes
#include <iostream>

// Own includes
#include "Person.hpp"

Person::Person(std::string name, int age): m_name{name}, m_age{age}{}

std::string Person::get_name()
{
    return m_name;
}

int Person::get_age()
{
    return m_age;
}