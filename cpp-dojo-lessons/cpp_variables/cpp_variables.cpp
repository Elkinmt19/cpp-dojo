#include <iostream>

using namespace std;

int main()
{
    string characterName = "John";
    int characterAge;
    characterAge = 35;

    cout << "There once was a man named " << characterName << endl;
    cout << "He was " << characterAge << " years old" << endl;

    characterName = "Mike";
    cout << "He liked the same " << characterName << endl;
    cout << "Buy did not like being " << characterAge << endl;

    return 0;
}