#include <iostream>

using namespace std;

int main()
{
    /**
     * This a script to begin working with strings in c++
     */

    string phrase = "Elkin Javier Guerra";

    /*
     * The lenght() function allows to find the number of chars
     * that the string has, this funtion does'nt have any params
     */
    cout << phrase.length() << endl;


    cout << phrase[0] << endl;
    phrase[0] = 'J';

    /**
     * The find() function allows to verify if a specific string is 
     * embedded in other string
     * 
     * params:
     *  - string to find inside the other string
     *  - start index
     * returns:
     *  - the index in what the embedded string starts 
     */
    cout << phrase.find("Javier", 0) << endl;

    /**
     * The sudstr() function allows to take a substring from other string
     * 
     * params:
     *  - start index
     *  - number of characters of the substring
     * returns:
     *  - substring
     */
    string phrasesub = phrase.substr(8, 3);
    cout << phrasesub << endl;

    return 0;
}