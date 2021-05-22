#include <iostream>

using namespace std;

// Function to convert a number into a day of the week using switch statement
string getDateOfWeek(int dayNum)
{
    string dayName;

    switch (dayNum)
    {
        case 0:
            dayName = "Sunday";
            break;
        case 1:
            dayName = "Monday";
            break;
        case 2:
            dayName = "Tuesday";
            break;
        case 3:
            dayName = "Wednesday";
            break;
        case 4:
            dayName = "Thursday";
            break;
        case 5:
            dayName = "Friday";
            break;
        case 6:
            dayName = "Saturday";
            break;
        default:
            dayName = "Invalid day number";
    }
    return dayName;
}

int main()
{   
    /**
     * This a stript to start working with switch statement in c++
     */

    cout << getDateOfWeek(0);

    return 0;
}