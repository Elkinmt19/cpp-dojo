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
    return 0;
}