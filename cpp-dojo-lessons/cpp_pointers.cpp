#include <iostream>

using namespace std;

int main()
{
    /**
     * This is a script to start working with pointers in c++
     */

    int age = 19;
    double gpa = 2.7;
    string name = "Elkin";

    // To get the memory address of a variable is used & before the varible
    cout << &age << endl;

    // To create a pointer in c++ is used * character
    int *pAge = &age;

    cout << pAge << endl;

    // To get the value that is saved in a specific pointer
    cout << *pAge; // This is called dreferencing a pointer

    return 0;
}