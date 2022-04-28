#include <iostream>
#include <string>
#include "indent.h"

int countChar(std::string line, char c) { 
    int totalcount = 0; 

    for (int i = 0; i < line.length(); i++) 
    { 
        if(line[i] == c) 
        { 
            totalcount++; //keep track of braces in the line of code given
        }
    }
    
    if (line.find("{") < line.find("}") && line.find("{") != -1 && line.find("}") != -1) 
    { 
        return totalcount - 1;
    } 
    else 
    { 
        return totalcount;
    }
}

std::string indent(std::string line, int out, int in) { 
    std::string result = ""; 
    std::string output ="";
    for(int i = 0; i < out - in; i++) 
    { 
        output += "    "; 
    }
    output = output + line;
    return output;
}