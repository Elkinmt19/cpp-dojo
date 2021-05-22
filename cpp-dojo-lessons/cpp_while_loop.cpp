#include <iostream>

using namespace std;

int main()
{
    /**
     * This is a stript to start working with while loops in c++
     */
    int index = 1;

    // Basic structure of whilw loops, it checks the condition before executing the code
    while(index <= 5)
    {
        cout << index << endl;
        index++; 
    }

    cout << "....................." << endl;

    // do-while loop structure, it execute the code before checking the condition
    do
    {
        cout << index << endl;
        index++;
    }while(index >= 5 && index <=18);

    return 0;
}