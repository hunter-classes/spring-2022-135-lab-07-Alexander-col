#include <iostream> 
#include <fstream> 
#include "unindent.h"
#include "indent.h"

int main() { 
    std::string line;
    int start_brace = 0;
    int out_brace = 0; 


    std::ifstream myStream("bad-code.cpp"); 
    if(myStream.fail()) 
    { 
        std::cerr << "File can't be opened"; 
        exit(1); //In case file did not open it will close and close off the
    }


     std::cout << "                          " << std::endl;

    std::cout << "Code before it is indented " << std::endl;
    std::cout << "                          " << std::endl;
    while(getline(myStream, line)) 
    { 
        std::cout << line << std::endl;
    }
    myStream.close();
    std::cout << "==============================================================================================\n";
 std::cout << "                          " << std::endl;

    std::cout << "Task A is removing the indentations" << std::endl;
    std::cout << "                          " << std::endl;
    myStream.open("bad-code.cpp");
    while(getline(myStream, line)) 
    { 
    std::cout << removeLeadingSpaces(line) << std::endl;
    }
    myStream.close();
    std::cout << "==============================================================================================\n";
     std::cout << "                          " << std::endl;

    std::cout << "Task B indented lines of code " << std::endl; 
   
    myStream.open("bad-code.cpp");

    while(getline(myStream, line)) { 
        out_brace = countChar(line, '}') + out_brace;
        std::string unindented_line = removeLeadingSpaces(line);
        std::cout << indent(unindented_line, start_brace, out_brace) << std::endl;
        start_brace = countChar(line, '{') + start_brace;
    }

    myStream.close();
}



    // std::fstream in("bad-code.cpp", std::ios_base::in);

	// ifstream inFile;

	// inFile.open("hello.txt", ios::in);
	// string output = "";
	// char c = ' ';
	// while (inFile.get(c))
    // {
	// 	output = output + c;
    // }
	// cout << output << endl;
	// return 0;