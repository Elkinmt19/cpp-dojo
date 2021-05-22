#include <iostream>

using namespace std;

int main()
{
    /**
     * This is a script to start working with arrays in c++
     */

    int luckyNums[] = {4, 8, 15, 17, 43}; // Crearing a known array of integers

    cout << luckyNums[0] << endl; // Accessing to a specific element of the array

    luckyNums[2] = 19; // Changing a specific element of the array

    int unknowarray[10]; // Creating an unknown array

    // Working with 2-d arrays
    // For this types of arrays, the dimensions must be specified 
    int numberGrid[5][3] = 
    {
        {1,2},
        {3,4},
        {4,5},
        {6,7},
        {8,9}
    };

    cout << numberGrid[0][0];

    return 0;
}