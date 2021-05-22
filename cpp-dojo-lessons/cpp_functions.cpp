#include <iostream>

using namespace std;

// The functions are declared in order to use them and define them below the main()
void sayHi(string name, int age);
double cube(double num);

int main()
{
    /**
     * This is a script to start working with functions in c++
     */

    cout << "Top" << endl;
    sayHi("Elkin", 21);
    cout << "Button" << endl;

    double answer = cube(5.0);
    cout << answer;

    return 0;
}

// Function to say Hi to the user
void sayHi(string name, int age)
{
    cout << "Hello User" << endl;
    cout << "Hello " << name << " you are " << age << endl;
}

// Function to calculate the cubic of a number
double cube(double num)
{
    double result = num*num*num;
    return result;
}
