// Built-int includes
#include <iostream>

// Own includes
#include "Person.hpp"
#include "Vehicle.hpp"

int main()
{
    Person person1("Elkin", 21);
    std::cout << "He is " << person1.get_name() << std::endl;

    // Let's create a vehicle for Elkin
    Vehicle car1("MEL4JE19", "Dark Blue", person1);
    car1.toString();

    return 0;
}