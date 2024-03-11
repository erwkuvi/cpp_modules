//#include "SedIsForLosers.hpp"
#include <fstream>
#include <ios>
#include <iostream>
#include <string>

int execute_sed(std::string filename, std::string oldword, std::string newword)
{
	std::fstream infile;
	std::fstream outfile;
	std::ofstream test;

	infile.open(filename, std::ios::in);
	if(!infile.is_open())
	{
		std::cerr << "Error: filename not opened" << std::endl;
		return 1;
	}
	outfile.open(filename + ".replace", std::ios::out);
	infile.close();
	outfile.close();
	return 0;
}
 
int main(int argc, char **argv)
{
	if (argc != 4) 
	{
		std::cerr << "Error: wrong number of parameters, only 3 accepted" << std::endl;
		return 1;
	}
	for (int i = 1; i < 4; i++) 
	{
		std::string checker = argv[i];
		if (checker.empty()) 
		{
			std::cerr << "Error: parameters cannot be empty" << std::endl;
			return 1;
		}
	}
	if(execute_sed(argv[1], argv[2], argv[3]))
		return 1;
	return 0; 
}
