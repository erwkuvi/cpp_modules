#include "RPN.hpp"
#include <exception>
#include <stdexcept>
#include <string>

int main(int argc, char** argv)
{

	try
	{
		if(argc < 2)
			throw std::runtime_error("Error: no arguments given!");
		else
		{
			std::string input(argv[1]);
			RPN rpn(input);
		}
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

