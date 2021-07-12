// Built-int includes
#include <iostream>
#include <fstream>
#include <sstream>

int main () {
    
    std::fstream myfile;
    myfile.open ("./../text-files/example.txt");

    if (myfile.is_open())
    {
        for (std::string line; std::getline(myfile, line); )
        {
            std::istringstream subfile;
            subfile.str(line);
            std::string data[3];

            int i = 0;
            for (std::string line2; std::getline(subfile, line2,',');)
            {
                *(data + i) = line2; i++;
            }
            std::cout << *(data) << ' ' << *(data+1) << ' ' << *(data+2) << std::endl;
        }
    }
    myfile.close();

    return 0;
}
