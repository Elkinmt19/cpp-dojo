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

    virtual std::string get_vehicle_type(){return "vehicle";}

    virtual std::string get_type(){return "";}

    virtual int get_numberOfGates(){return 0;}

    int get_owner_age();
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

    std::string get_vehicle_type() override {return "motorcycle";}
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

    std::string get_vehicle_type() override {return "car";}

};

#endif