// Built-int includes
#include <iostream>

// Own includes
#include "Person.hpp"
#include "Vehicle.hpp"
#include "VehicleWash.hpp"


int main()
{
    // Let's created two persons
    Person person_1("Mario Bros", 65),person_2("Luigi Bros", 59);

    // Let's create a car 
    Car car_1("MAR001", "Red", person_1, 2);

    // Let's create a motorcycle
    Motorcycle moto_1("LUI001", "Green", person_2, "Twice");

    // Let's create a Vehicle Wash
    VehicleWash vehiclewash_1("Reino Champinon");

    // Let's add the car and the motorcycle just created
    vehiclewash_1.addVehicle(car_1);
    vehiclewash_1.addVehicle(moto_1);

    // Let's show the information of the Vehicle Wash
    vehiclewash_1.toString();
    float a = vehiclewash_1.CalculateGain();

    return 0;
}