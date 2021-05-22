#include <iostream>

using namespace std;

int main()
{
    /**
     * This a script to start working with for loops in c++
     */

    int index = 1;

    cout << "While loop" << endl;
    while (index <= 5)
    {
        cout << index << endl;
        index++;
    }


    int num[] = {1,2,3,4,5,6};
    // For loop structure 
    cout << "For loop" << endl;
    for (int i = 0; i <= 5; i++)
    {
        cout << num[i] << endl;
    }

    int numberGrid[5][3] = 
    {
        {1,2},
        {3,4},
        {4,5},
        {6,7},
        {8,9}
    };

    cout << "Number matrix" << endl;
    //Nested for loop structure
    for (int j = 0; j < 5; j++)
    {
        for (int k = 0; k < 2; k++)
        {
            cout << numberGrid[j][k];
        }
        cout << endl;
    }
    return 0;
}