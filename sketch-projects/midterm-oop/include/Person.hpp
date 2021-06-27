#ifndef PERSON_H
#define PERSON_H

// Built-int includes
#include <iostream>

class Person
{
private:
    std::string m_name;
    int m_age; 

public:
    Person(std::string name, int age);

    std::string get_name();
    int get_age();
};

#endif
