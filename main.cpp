#include <iostream>
#include <fstream>
#include "unindent.h"

int main()
{
    std::string line;
    int out_brace = 0;
    int in_brace = 0; 
    std::cout << removeLeadingSpaces("                int main(){") << std::endl;

	std::string t_line;

	std::ifstream bad_code("bad-code.cpp");
	while (getline(bad_code, t_line))
	{
		std::cout << t_line << std::endl;
	}

		while (getline(bad_code, t_line))
	{
		std::cout << removeLeadingSpaces(t_line) << std::endl;
	}





    return 0;
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