#include <iostream>
#include "ScalarConverter.hpp"

int main (int argc, char** argv)
{
	//char* term;

	//float val = std::strtof("19999922222", &term);
	//std::cout << "term: " << *term << std::endl;
	//std::cout << "float: " << val << std::endl;
	//std::cout << "value: " << static_cast<int>(val) << std::endl;
	//std::cout << "\nArgument given " << std::endl;
	if (argc == 2)
	{
		std::string arg(argv[1]);
		ScalarConverter::convert(arg);
	}
	//std::cout << "Yeiiii" << std::endl;

	
	//converter.convert();
	//float i = 21.0f;
	//double d = 2.222222222222222222222222222;
	//char c = 'c';
	//float f = 2.222222222222222222222222222f;
	//std::cout << "float: " << i << std::endl;

}
