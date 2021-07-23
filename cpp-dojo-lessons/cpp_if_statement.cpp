#include <iostream>

using namespace std;

int main()
{
    /**
     * This is a script to start working with if statements in c++
     */

    // Function to get the max of two numbers given by the user
    int getMax(int num1, int num2);

    bool isMale = true;
    bool isTall = true;

    // The if statement using the && and ! operators
    if (isMale && isTall)
    {
        cout << "You are a male" << endl;
    }
    else if(isMale && !isTall)
    {
        cout << "You are a short male" << endl;
    }
    else
    {
        cout << "You are not male" << endl;
    }

    // The if statemet using the || operator
    if (isMale || isTall)
    {
        cout << "You are a male" << endl;
    }
    else
    {
        cout << "You are not male" << endl;
    }

    cout << "The max of 5 and 7 is " << getMax(5,7) << endl;

    cout << "The max of 7 and 9 is " << getMax_Ternary_operator(7,9) << endl;

    return 0;
}

// Function using an if statement to get the max of two numbers given by the user
int getMax(int num1, int num2)
{
    int result;
        
        if (num1 > num2)
        {
            result = num1;
        }
        else
        {
            result = num2;
        }
        return result;
}

// Another option for this structures of code could be to use the 'Ternary Operator'
int getMax_Ternary_operator(int num1, int num2)
{
    int result;

    result = num1 > num2 ? num1: num2;

    return result;
}