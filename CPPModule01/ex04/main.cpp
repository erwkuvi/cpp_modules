#include "SedIsForLosers.hpp"
#include <iostream>

void execute_sed(char **argv)
{

}

int main(int argc, char **argv)
{
	Sed instance("test");
	if (argc == 4)
	{
		execute_sed(argv);
	}
	else
	{
		std::cerr << "Error: wrong number of parameters, only 3 accepted" << std::endl;
		return 1;
	}
	return 0; 
}
