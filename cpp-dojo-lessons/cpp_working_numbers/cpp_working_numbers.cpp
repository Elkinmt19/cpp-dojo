#include <iostream>
#include <cmath> // import of the cmath module for mathematical functions

using namespace std;

int main()
{
    /**
     * This is a script to start working with numbers in c++
     */


    int wnum = 5;
    double dnum = 5.5;

    wnum++; // Added 1 to the variable
    dnum += 5; // Added 5 to the variable
    cout << -40 << endl;

    cout << 5.5 + 9 << endl;
    cout << 10/3 << endl;
    cout << 10/3.3 << endl;

    // Math functions of the cmath module
    
    /**
     * The pow() function allows to find the power of a number
     * params:
     *  - the base of the power operation
     *  - the exponent of the operation
     * returns:
     *  - the result of the power operation 
     */
    cout << pow(2,5) << endl;

    /**
     * The sqrt() function allows to find the square root of a number
     * params:
     *  - the number for finding the square root
     * returns:
     *  - the result of the sqrt operation 
     */
    cout << sqrt(36) << endl;

    /**
     * The round() function allows to find the round of a number
     * params:
     *  - the number for finding the round
     * returns:
     *  - the result of the round operation 
     */
    cout << round(34.56) << endl;

    /**
     * The floor() function allows to find the down round of a number
     * params:
     *  - the number for finding the down round
     * returns:
     *  - the result of the down round operation 
     */
    cout << floor(45.67) << endl;

    /**
     * The fmax() function allows to find the max of two numbers
     * params:
     *  - first number
     *  - second number
     * returns:
     *  - the maximum number
     */
    cout << fmax(34,78) << endl;

    /**
     * The fmin() function allows to find the min of two numbers
     * params:
     *  - first number
     *  - second number
     * returns:
     *  - the minimum number
     */
    cout << fmin(34,57) << endl;

    return 0;
}