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

    // Let's create a Motorcycle for Elkin
    Motorcycle moto1("M0R4L19","Dark Blue",person1,"4 Times");
    moto1.toString();
    std::cout << "My motorcycle's type is " << moto1.get_type() << std::endl;

    return 0;
}