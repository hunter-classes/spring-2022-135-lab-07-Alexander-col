#include <iostream>
#include "funcs.h"

std::string removeLeadingSpaces(std::string str)
{
    std::string output = "";
    int sl = str.length();
    for (int i = 0; i != sl; i++)
    {
        if (str[i] != ' ' )
        output += str[i];


        // if (str[i+1] != ' ' || str[i-1] != ' ')
        // {
        //     output += str[i];
        // }
        // else if (str[i] == ' ')
        // {
        // output -= str[i];
        // }
    }

    return output;


}