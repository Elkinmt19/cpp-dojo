#include <iostream>
#include <string> // Import of the string module in order to use getline() function

using namespace std;

int main()
{
    /**
     * This is a script to start working with inputs given by the users of the C++ programs
     */
    int age;


    cout << "Enter your age please" << endl; // To print out something is used the cout (c-out) command
    cin >> age;// To get something from the user is used the cin command

    cout << "You are " << age << "years old" << endl;

    string name;

    cout << "Enter your name please" << endl;

    /**
     * The getline() functions allows to get a hole line of text (incluring spaces)
     * params:
     *  - cin keyword
     *  - the variable in which the entries are gonna be stored 
     */
    cin.ignore();// Command needed for the getline() function to work
    getline(cin , name);

    cout << "Hello " << name << endl;

    return 0;
}
