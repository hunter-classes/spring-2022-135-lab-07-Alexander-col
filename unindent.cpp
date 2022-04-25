#include <iostream>
#include <fstream> 
#include "unindent.h"
#include <ctype.h>
#include <stdio.h>

// Assuming that this is the dev branch I will now start the change of the function 
// I will change the removeLeadingSpaces func to use the isspace(c) function that was 
// suggested on the lab website
std::string removeLeadingSpaces(std::string str)
{
    std::string output = "";
    int sl = str.length();
    int ns = 0; // ns stands for No Space
    for (int i = 0; i != sl; i++)
    {
        if (isspace(str[i]) == 0)
        {
        ns = i;
        break;
        }
    }

    for (int j = ns; j != sl; j++)
    {
        output += str[j];
    }

    return output;


}
// the function now incoperaterates the isspace(c) function which works with the rest of the lab. 