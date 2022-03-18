#include <iostream>
#include <fstream> 
#include "unindent.h"


std::string removeLeadingSpaces(std::string str)
{
    std::string output = "";
    int sl = str.length();
    int ns = 0; // ns stands for No Space
    for (int i = 0; i != sl; i++)
    {
        if (str[i] != ' ')
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