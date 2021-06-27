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

    void set_plate(std::string n_plate);
    void set_color(std::string n_color);
    void set_owner(Person& n_owner);
};

class Motorcycle : public Vehicle
{
private:
    std::string m_type;

public:
    Motorcycle(
        std::string plate,
        std::string color,
        Person& owner,
        std::string type
    ): Vehicle(plate, color, owner), m_type(type){}

    std::string get_type();
};

class Car : public Vehicle
{
private:
    int m_numberOfGates;

public:
    Car(
        std::string plate,
        std::string color,
        Person& owner,
        int numberOfGates
    ): Vehicle(plate, color, owner), m_numberOfGates(numberOfGates){}

    int get_numberOfGates();
};

#endif